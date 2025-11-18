package pe.edu.pucp.laboratorio.lab10_2025_2;

import java.util.Scanner;

public class Vehiculo extends Registro {

    private static final int AÑO_VACIO = -1;

    private String placa;
    private String marca;
    private String modelo;
    private int anhoFab;
    private String categoria;
    private Propietario propietario;
    
    public Vehiculo(){
        this.placa = null;
        this.marca = null;
        this.modelo = null;
        this.anhoFab = Vehiculo.AÑO_VACIO;
        this.categoria = null;
        this.propietario = null;
    }

    @Override
    public boolean cargarDatos(Scanner scanner) {
        // TODO: Implementar la lógica para cargar los datos del vehículo desde el scanner
        return false;
    }
    
    @Override
    public void imprimir() {
        // TODO: Implementar la lógica para imprimir los datos del vehículo
    }

    @Override
    public String toString() {
        String resultado = "";
        resultado += String.format("║ Placa: %-43s ║\n", getPlaca());
        resultado += String.format("║ Marca: %-43s ║\n", getMarca());
        resultado += String.format("║ Modelo: %-42s ║\n", getModelo());
        resultado += String.format("║ Año de Fabricación: %-30d ║\n", getAnhoFab());
        resultado += String.format("║ Categoría: %-39s ║\n", getCategoria());
        return resultado;
    }

    /**
     * @return the placa
     */
    public String getPlaca() {
        return placa;
    }

    /**
     * @param placa the placa to set
     */
    public void setPlaca(String placa) {
        this.placa = placa;
    }

    /**
     * @return the marca
     */
    public String getMarca() {
        return marca;
    }

    /**
     * @param marca the marca to set
     */
    public void setMarca(String marca) {
        this.marca = marca;
    }

    /**
     * @return the modelo
     */
    public String getModelo() {
        return modelo;
    }

    /**
     * @param modelo the modelo to set
     */
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    /**
     * @return the anhoFab
     */
    public int getAnhoFab() {
        return anhoFab;
    }

    /**
     * @param anhoFab the anhoFab to set
     */
    public void setAnhoFab(int anhoFab) {
        this.anhoFab = anhoFab;
    }

    /**
     * @return the categoria
     */
    public String getCategoria() {
        return categoria;
    }

    /**
     * @param categoria the categoria to set
     */
    public void setCategoria(String categoria) {
        this.categoria = categoria;
    }

    /**
     * @return the propietario
     */
    public Propietario getPropietario() {
        return propietario;
    }

    /**
     * @param propietario the propietario to set
     */
    public void setPropietario(Propietario propietario) {
        this.propietario = propietario;
    }
    
    
    
}
