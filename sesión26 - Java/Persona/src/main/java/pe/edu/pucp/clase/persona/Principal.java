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
//        paterno = "Guanira";
//        System.out.println(persona);
            Persona padre = new Persona("Melgar", "Sasieta", "Héctor Andrés");
            Persona hija = new Persona("Melgar", "Arauco", "Luciana");
            Familia familiaMelgar = new Familia(padre, hija);
            System.out.println(familiaMelgar);
            
            hija.setNombre("Daniela");
            System.out.println(familiaMelgar);
    }
}
