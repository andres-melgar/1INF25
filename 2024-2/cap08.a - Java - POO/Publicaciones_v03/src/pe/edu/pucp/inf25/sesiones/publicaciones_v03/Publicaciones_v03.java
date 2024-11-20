package pe.edu.pucp.inf25.sesiones.publicaciones_v03;

public class Publicaciones_v03 {

    public static void main(String[] args) {        
        //Publicacion publicacion = new Publicacion("Nombre x", "Dr. X", 2024);
        //publicacion.referenciar();
        
        String autores[]={"Erich Gamma", "Richard Helm", "Ralph Johnson", "John Vlissides"};
        
        Publicacion publicaciones[] = new Publicacion[3];        
        publicaciones[0] = new Articulo("A relational model of data for large shared data banks", "E. F. Codd", 1970, "Communications of the ACM", 13, 6, "junio");
        publicaciones[1] = new Libro("Design Patterns: Elements of Reusable Object-Oriented Software", autores, 1994, "1er edición", "Massachusetts", "Addison-Wesley Professional");
        publicaciones[2] = new Tesis("Systems of Logic Based on Ordinals", "Alan Turing", 1938, "Tesis de Doctorado", "Departamento de Matemáticas", "Universidad de Princeton", "Princeton", "NJ");
        
        for (int i=0; i<publicaciones.length; i++){
            publicaciones[i].referenciar();
            Publicacion.incrementar_orden();
        }            
    }
    
}
