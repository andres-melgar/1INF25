package pe.edu.pucp.clase.archivos;

import java.io.FileNotFoundException;
import java.io.IOException;


public class Archivos {

    public static void main(String[] args) throws FileNotFoundException, IOException {
        System.out.println("Ejemplo de lectura de archivos de texto");
        LecturaArchivo.leer_archivo();
        EscrituraArchivo.escribir_archivo();
    }
}
