package pe.edu.pucp.clase.archivos;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Locale;
import java.util.Scanner;

class LecturaArchivo {

    static void leer_archivo() throws FileNotFoundException {
        File archivo = new File("src/main/resources/archivo.txt");
        Scanner scanner = new Scanner(archivo);
        scanner.useLocale(Locale.US);
        
        while(scanner.hasNext()){
            Integer entero = scanner.nextInt();
            String cadena = scanner.next();
            String buffer_char = scanner.next();
            char caracter = buffer_char.charAt(0);
            Double real = scanner.nextDouble();
            
            System.out.println(entero + " " + cadena + " " + caracter + " " + real);
        }
    }
    
}
