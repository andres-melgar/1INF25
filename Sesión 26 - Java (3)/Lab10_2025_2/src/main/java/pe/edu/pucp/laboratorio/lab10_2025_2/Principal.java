package pe.edu.pucp.laboratorio.lab10_2025_2;

import java.io.IOException;

public class Principal {
    public static void main(String[] args) throws IOException {
        AutoridadTransporte atu = new AutoridadTransporte("datos.txt");
        atu.cargarDatos();
        atu.procesarCapturas();
        atu.imprimirInfracciones();
    }
}
