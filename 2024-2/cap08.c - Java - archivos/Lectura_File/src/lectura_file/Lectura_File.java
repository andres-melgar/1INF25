package lectura_file;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

/**
 *
 * Autor: andres
 */
public class Lectura_File {

    public static void main(String[] args) throws FileNotFoundException {
        File archivo = new File("archivo.txt");
        Scanner arch = new Scanner(archivo);
                
        Integer entero;
        String cadena;
        String cadena_buffer;
        char caracter;
        Double real;
        while(arch.hasNext()){
            entero = arch.nextInt();
            cadena = arch.next();
            cadena_buffer = arch.next();            
            caracter = cadena_buffer.charAt(0);            
            real = arch.nextDouble();
         
            System.out.println(entero + " " + cadena + " " + caracter + " " + real);
        }
    }

}
