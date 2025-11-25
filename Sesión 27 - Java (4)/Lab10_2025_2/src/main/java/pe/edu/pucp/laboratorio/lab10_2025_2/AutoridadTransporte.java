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
        while (this.archivo.hasNext()){
            Propietario propietario = new Propietario();
            if (!propietario.cargarDatos(archivo)){
                break;
            }
            this.propietarios.add(propietario);
        }
    }

    private void cargar_vehiculos() {
        while (this.archivo.hasNext()){
            Vehiculo vehiculo = new Vehiculo();
            if (!vehiculo.cargarDatos(archivo)){
                break;
            }
            Integer dni = this.archivo.nextInt();
            Propietario propietario = this.buscarPropietario(dni);
            vehiculo.setPropietario(propietario);
            this.vehiculos.add(vehiculo);
        }
    }

    private void cargar_captura() {
        while (archivo.hasNext()){
            Captura captura = new Captura();
            if (captura.cargarDatos(archivo)){
                this.capturas.add(captura);
            }
        }
    }
    
    void procesarCapturas() {
        for(Captura captura: this.capturas){
            this.procesarCaptura(captura);
        }
    }

    private void procesarCaptura(Captura captura) {
        double velocidad = captura.getVelocidad();
        int km = captura.getKm();
        Carril carril = captura.getCarril();
        Vehiculo vehiculo = this.buscarVehiculo(captura.getPlaca());
        
        boolean vehiculoEsPermitido = carril.vehiculoPermitido(vehiculo.getCategoria());
        boolean velocidadPermitida = carril.velocidadPermitida(km, velocidad);        
        if (!vehiculoEsPermitido){
            RegistroInfraccion infraccion = new RegistroInfraccion();
            infraccion.setCodigoInfraccion("M20");
            infraccion.setMonto(963.00);
            infraccion.setPuntos(50);
            infraccion.setCaptura(captura);
            infraccion.setVehiculo(vehiculo);
            this.regInfracciones.add(infraccion);
        }
        if (!velocidadPermitida){
            RegistroInfraccion infraccion = new RegistroInfraccion();
            infraccion.setCodigoInfraccion("G29");
            infraccion.setMonto(428);
            infraccion.setPuntos(50);
            infraccion.setCaptura(captura);
            infraccion.setVehiculo(vehiculo);
            this.regInfracciones.add(infraccion);
        }
    }
    
    void imprimirInfracciones() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    private Propietario buscarPropietario(Integer dni) {
//        for (int i=0; i<this.propietarios.size(); i++){
//            
//        }
//        
        for(Propietario propietario: this.propietarios){
            if (propietario.getDni() == dni){
                return propietario;
            }
        }
        return null;
    }
        
}
