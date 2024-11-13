package pe.edu.pucp.inf25.sesiones.publicaciones_v01;

public class Publicaciones_v02 {

    public static void main(String[] args) {        
        //Publicacion publicacion = new Publicacion();
        Publicacion publicacion = new Publicacion("A relational model of data for large shared data banks", "E. F. Codd", 1970);
        publicacion.referenciar();
        
        String autores[]={"Erich Gamma", "Richard Helm", "Ralph Johnson", "John Vlissides"};
        publicacion = new Publicacion("Design Patterns: Elements of Reusable Object-Oriented Software", autores, 1994);
        publicacion.referenciar();
        
        autores[0] = "Andrés Melgar";
        publicacion.referenciar();
        
        publicacion = new Publicacion("Systems of Logic Based on Ordinals", "Alan Turing", 1938);
        publicacion.referenciar();
    }
    
}
