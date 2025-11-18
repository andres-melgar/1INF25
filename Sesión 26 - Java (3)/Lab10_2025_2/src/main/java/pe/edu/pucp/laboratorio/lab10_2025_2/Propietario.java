package pe.edu.pucp.laboratorio.lab10_2025_2;

import java.util.Scanner;

public class Propietario extends Registro {

    private static final int DNI_VACIO = -1;

    private int dni;
    private String nombres;
    private String apellidos;
    private String direccion;
    
    public Propietario(){
        this.dni = Propietario.DNI_VACIO;
        this.nombres = null;
        this.apellidos = null;
        this.direccion = null;
    }

    @Override
    public boolean cargarDatos(Scanner scanner) {
        // TODO: Implementar la lógica para cargar los datos del propietario desde el scanner
        return false;
    }

    @Override
    public void imprimir() {
        // TODO: Implementar la lógica para imprimir los datos del propietario
    }

    @Override
    public String toString() {
        String resultado = "";
        resultado += String.format("║ DNI: %-45d ║\n", getDni());
        resultado += String.format("║ Nombres: %-41s ║\n", getNombres());
        resultado += String.format("║ Apellidos: %-39s ║\n", getApellidos());
        resultado += String.format("║ Dirección: %-39s ║\n", getDireccion());
        return resultado;
    }

    /**
     * @return the dni
     */
    public int getDni() {
        return dni;
    }

    /**
     * @param dni the dni to set
     */
    public void setDni(int dni) {
        this.dni = dni;
    }

    /**
     * @return the nombres
     */
    public String getNombres() {
        return nombres;
    }

    /**
     * @param nombres the nombres to set
     */
    public void setNombres(String nombres) {
        this.nombres = nombres;
    }

    /**
     * @return the apellidos
     */
    public String getApellidos() {
        return apellidos;
    }

    /**
     * @param apellidos the apellidos to set
     */
    public void setApellidos(String apellidos) {
        this.apellidos = apellidos;
    }

    /**
     * @return the direccion
     */
    public String getDireccion() {
        return direccion;
    }

    /**
     * @param direccion the direccion to set
     */
    public void setDireccion(String direccion) {
        this.direccion = direccion;
    }

}
