package pe.edu.pucp.clase.archivos;

import java.io.FileWriter;
import java.io.IOException;


public class EscrituraArchivo {

    public static void escribir_archivo() throws IOException{
        FileWriter writer = new FileWriter("src/main/resources/reporte.txt");
        writer.write("Reporte de drones\n");
        writer.write("localizacion: " + 14.56);
        writer.close();
        System.out.println("Archivo generado correctamente...");
    }
}
