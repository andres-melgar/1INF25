package pe.edu.pucp.clase.persona;

public class Principal {

    public static void main(String[] args) {
//        String paterno = "Melgar";
//        String materno = "Sasieta";
//        String nombre = "Héctor Andrés";
//        
//        Persona persona = new Persona(paterno, materno, nombre);
//        System.out.println(persona);
//        
//        paterno = "Guanira".concat(" Miguel");
//        System.out.println(persona);
//        
//        persona.setPaterno("Saldarriaga");
//        System.out.println(persona);
//        
//        System.out.println(paterno);
    Persona padre = new Persona("Melgar", "Sasieta", "Héctor Andrés");
    Persona hijo = new Persona("Melgar", "Arauco", "Luciana");
    Familia familia = new Familia(padre, hijo);
    System.out.println(familia);
    
    hijo.setNombre("Daniela");
    System.out.println(familia);
    }
}
