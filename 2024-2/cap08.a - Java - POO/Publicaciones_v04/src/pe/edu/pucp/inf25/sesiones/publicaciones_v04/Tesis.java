package pe.edu.pucp.inf25.sesiones.publicaciones_v04;

import static pe.edu.pucp.inf25.sesiones.publicaciones_v04.Clase_de_Tesis.DOCTORADO;
import static pe.edu.pucp.inf25.sesiones.publicaciones_v04.Clase_de_Tesis.LICENCIATURA;
import static pe.edu.pucp.inf25.sesiones.publicaciones_v04.Clase_de_Tesis.MAESTRIA;

public class Tesis extends Publicacion {

    private Clase_de_Tesis clase;
    private String departamento;
    private String institucion;
    private String ciudad;
    private String estado;

    public Tesis(String nombre, String autor, Integer año, Clase_de_Tesis clase, String departamento, String institucion, String ciudad, String estado) {
        super(nombre, autor, año);
        this.clase = clase;
        this.departamento = departamento;
        this.institucion = institucion;
        this.ciudad = ciudad;
        this.estado = estado;
    }

    public Tesis(String nombre, String autores[], Integer año, Clase_de_Tesis clase, String departamento, String institucion, String ciudad, String estado) {
        super(nombre, autores, año);
        this.clase = clase;
        this.departamento = departamento;
        this.institucion = institucion;
        this.ciudad = ciudad;
        this.estado = estado;
    }

    @Override
    public void referenciar() {
        String referencia = "[" + orden_presentacion.toString() + "] ";
        for (int i = 0; i < this.cantidad_autores; i++) {
            if (i != 0) {
                if (i == this.cantidad_autores - 1) {
                    referencia = referencia.concat(" y ");
                } else {
                    referencia = referencia.concat(", ");
                }
            }
            referencia = referencia.concat(this.autores[i]);
        }
        referencia = referencia.concat(", ");
        referencia = referencia.concat(this.nombre);
        referencia = referencia.concat(", ");
        //referencia = referencia.concat(this.clase);
//        switch(this.clase){
//            case LICENCIATURA: referencia = referencia.concat("Tesis de Licenciatura");
//            break;
//            case MAESTRIA: referencia = referencia.concat("Tesis de Maestría");
//            break;
//            case DOCTORADO: referencia = referencia.concat("Tesis de Doctorado");
//            break;
//        }
        switch (this.clase) {
            case LICENCIATURA -> referencia = referencia.concat("Tesis de Licenciatura");
            case MAESTRIA -> referencia = referencia.concat("Tesis de Maestría");
            case DOCTORADO -> referencia = referencia.concat("Tesis de Doctorado");
        }
        referencia = referencia.concat(", ");
        referencia = referencia.concat(this.departamento);
        referencia = referencia.concat(", ");
        referencia = referencia.concat(this.institucion);
        referencia = referencia.concat(", ");
        referencia = referencia.concat(this.ciudad);
        referencia = referencia.concat(", ");
        referencia = referencia.concat(this.estado);
        referencia = referencia.concat(", ");
        referencia = referencia.concat(this.año.toString());
        referencia = referencia.concat(".");
        System.out.println(referencia);
    }
}
