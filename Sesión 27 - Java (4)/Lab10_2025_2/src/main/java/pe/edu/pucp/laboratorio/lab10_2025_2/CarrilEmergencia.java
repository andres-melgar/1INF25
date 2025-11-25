package pe.edu.pucp.laboratorio.lab10_2025_2;

public class CarrilEmergencia extends Carril {

    @Override
    public String getTipo() {
        return "Emergencia";
    }

    @Override
    public double velocidadMaxima(int km) {
        return 80.00;
    }

    @Override
    public boolean velocidadPermitida(int km, double velocidad) {
        return velocidad <= this.velocidadMaxima(km);
    }

    @Override
    public boolean vehiculoPermitido(String categoria) {
        return categoria.equals("Ambulancia") || categoria.equals("Grua"); 
    }
    
}
