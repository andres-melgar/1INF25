package pe.edu.pucp.laboratorio.lab10_2025_2;


public abstract class Carril {
 
    public abstract String getTipo();
    
    public abstract double velocidadMaxima(int km);
    
    public abstract boolean velocidadPermitida(int km, double velocidad);
    
    public abstract boolean vehiculoPermitido(String categoria);
}
