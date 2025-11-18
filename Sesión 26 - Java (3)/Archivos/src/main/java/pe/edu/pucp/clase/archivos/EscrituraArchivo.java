package pe.edu.pucp.clase.archivos;

import java.io.FileWriter;
import java.io.IOException;

class EscrituraArchivo {

    public static void escribir_archivo() throws IOException {
        FileWriter writer = new FileWriter("src/main/resources/reporte.txt");
        writer.write("Reporte de drones\n");
        writer.write("Nota: " + 18);
        writer.close();
    }
    
}
