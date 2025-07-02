package pe.edu.pucp.clase.archivos;

import java.io.FileNotFoundException;
import java.io.IOException;

public class Archivos {

    public static void main(String[] args) throws FileNotFoundException, IOException {
//        System.out.println("Lectura de archivo");
        LecturaArchivo1.leer_archivo();
        EscrituraArchivo.escribir_archivo();
    }
}
