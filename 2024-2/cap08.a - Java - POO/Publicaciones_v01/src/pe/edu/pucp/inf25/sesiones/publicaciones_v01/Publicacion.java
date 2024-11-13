package pe.edu.pucp.inf25.sesiones.publicaciones_v01;

public class Publicacion {

    private String nombre;
    private String autores[];
    private Integer cantidad_autores;
    private Integer año;

    public Publicacion(String nombre, String autor, Integer año) {
        this.nombre = nombre;
        this.autores = new String[1];
        this.autores[0] = autor;
        this.cantidad_autores = 1;
        this.año = año;
    }

    public Publicacion(String nombre, String autores[], Integer año) {
        this.nombre = nombre;
        //Esto no es recomendado
        //this.autores = autores;
        this.autores = new String[autores.length];
        for (int i = 0; i < autores.length; i++) {
            this.autores[i] = autores[i];
        }
        this.cantidad_autores = autores.length;
        this.año = año;
    }

    public void referenciar() {
        String referencia = "[1] ";
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
        referencia = referencia.concat(". ");
        referencia = referencia.concat(this.nombre);
        referencia = referencia.concat(". ");
        referencia = referencia.concat(this.año.toString());
        referencia = referencia.concat(".");
        System.out.println(referencia);
    }
}
