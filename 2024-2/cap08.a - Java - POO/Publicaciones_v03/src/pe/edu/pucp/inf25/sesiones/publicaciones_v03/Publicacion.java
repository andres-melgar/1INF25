package pe.edu.pucp.inf25.sesiones.publicaciones_v03;

public abstract class Publicacion {

    protected static Integer orden_presentacion = 1;
    protected String nombre;
    protected String autores[];
    protected Integer cantidad_autores;
    protected Integer año;

// Solo se implementó para probar el problema de los constructores
// en la herencia    
//    public Publicacion(){
//        
//    }
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

    public abstract void referenciar();
    
    public static void incrementar_orden(){
        Publicacion.orden_presentacion++;
}

}
