package pe.edu.pucp.clase.archivos;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Locale;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

public class LecturaArchivo2 {

    public static void leer_archivo() {
        try {
            File archivo = new File("src/main/resources/archivoInter.txt");
            Scanner scanner = new Scanner(archivo);
            scanner.useLocale(Locale.US);

            while (scanner.hasNext()) {
                Integer entero = scanner.nextInt();
                String cadena = scanner.next();
                String buffer_char = scanner.next();
                char caracter = buffer_char.charAt(0);
                Double real = scanner.nextDouble();

                System.out.println(entero + " " + cadena + " " + caracter + " " + real);
            }
        } catch (FileNotFoundException ex) {
            Logger.getLogger(LecturaArchivo2.class.getName()).log(Level.SEVERE, "Capturando excepciones en clase de Progra2", ex);
        }
    }
}
