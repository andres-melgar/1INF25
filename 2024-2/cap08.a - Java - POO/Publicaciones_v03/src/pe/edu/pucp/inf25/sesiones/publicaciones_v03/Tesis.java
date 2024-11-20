package pe.edu.pucp.inf25.sesiones.publicaciones_v03;

public class Tesis extends Publicacion {

    private String clase;
    private String departamento;
    private String institucion;
    private String ciudad;
    private String estado;
    
    public Tesis(String nombre, String autor, Integer año, String clase, String departamento, String institucion, String ciudad, String estado){
        super(nombre, autor, año);
        this.clase = clase;
        this.departamento = departamento;
        this.institucion = institucion;
        this.ciudad = ciudad;
        this.estado = estado;
    }
    
    public Tesis(String nombre, String autores[], Integer año, String clase, String departamento, String institucion, String ciudad, String estado){
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
        referencia = referencia.concat(this.clase);
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
