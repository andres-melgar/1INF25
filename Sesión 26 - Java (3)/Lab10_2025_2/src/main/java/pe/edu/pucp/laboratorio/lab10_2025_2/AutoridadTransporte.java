package pe.edu.pucp.laboratorio.lab10_2025_2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class AutoridadTransporte {
    
    private List<Propietario> propietarios;
    private List<Vehiculo> vehiculos;
    private List<Captura> capturas;
    private List<RegistroInfraccion> regInfracciones;
    private Scanner archivo;
    
    public AutoridadTransporte(String nombreArchivo) throws FileNotFoundException {
        this.propietarios = new ArrayList<>();
        this.vehiculos = new ArrayList<>();
        this.capturas = new ArrayList<>();
        this.regInfracciones = new ArrayList<>();
        
        File file = new File(nombreArchivo);
        this.archivo = new Scanner(file);
    }

    void cargarDatos() {
        this.cargar_propietarios();
        this.cargar_vehiculos();
        this.cargar_captura();
    }

    private void cargar_propietarios() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    private void cargar_vehiculos() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    private void cargar_captura() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
    
    void procesarCapturas() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    void imprimirInfracciones() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
    
}
