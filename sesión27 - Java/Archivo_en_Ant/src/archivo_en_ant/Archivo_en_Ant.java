package archivo_en_ant;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Locale;
import java.util.Scanner;

public class Archivo_en_Ant {

    public static void main(String[] args) throws FileNotFoundException {
        File archivo = new File("archivo.txt");
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
    }
}
