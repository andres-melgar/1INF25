package pe.edu.pucp.inf25.sesiones.publicaciones_v02;

public class Publicaciones_v02 {

    public static void main(String[] args) {        
        //Publicacion publicacion = new Publicacion();
        Articulo articulo = new Articulo("A relational model of data for large shared data banks", "E. F. Codd", 1970, "Communications of the ACM", 13, 6, "junio");
        articulo.referenciar();
        
        String autores[]={"Erich Gamma", "Richard Helm", "Ralph Johnson", "John Vlissides"};
        Libro libro = new Libro("Design Patterns: Elements of Reusable Object-Oriented Software", autores, 1994, "1er edición", "Massachusetts", "Addison-Wesley Professional");
        libro.referenciar();
               
        Tesis tesis = new Tesis("Systems of Logic Based on Ordinals", "Alan Turing", 1938, "Tesis de Doctorado", "Departamento de Matemáticas", "Universidad de Princeton", "Princeton", "NJ");
        tesis.referenciar();
    }
    
}
