package pe.edu.pucp.laboratorio.lab10_2025_2;

public class RegistroInfraccion {

    private String codigoInfraccion;
    private double monto;
    private int puntos;
    private Captura captura;
    private Vehiculo vehiculo;

    public RegistroInfraccion() {
        this.codigoInfraccion = null;
        this.monto = 0;
        this.puntos = 0;
        this.captura = null;
        this.vehiculo = null;
    }
            
    @Override
    public String toString(){
        return null;
    }

    /**
     * @return the codigoInfraccion
     */
    public String getCodigoInfraccion() {
        return codigoInfraccion;
    }

    /**
     * @param codigoInfraccion the codigoInfraccion to set
     */
    public void setCodigoInfraccion(String codigoInfraccion) {
        this.codigoInfraccion = codigoInfraccion;
    }

    /**
     * @return the monto
     */
    public double getMonto() {
        return monto;
    }

    /**
     * @param monto the monto to set
     */
    public void setMonto(double monto) {
        this.monto = monto;
    }

    /**
     * @return the puntos
     */
    public int getPuntos() {
        return puntos;
    }

    /**
     * @param puntos the puntos to set
     */
    public void setPuntos(int puntos) {
        this.puntos = puntos;
    }

    /**
     * @return the captura
     */
    public Captura getCaptura() {
        return captura;
    }

    /**
     * @param captura the captura to set
     */
    public void setCaptura(Captura captura) {
        this.captura = captura;
    }

    /**
     * @return the vehiculo
     */
    public Vehiculo getVehiculo() {
        return vehiculo;
    }

    /**
     * @param vehiculo the vehiculo to set
     */
    public void setVehiculo(Vehiculo vehiculo) {
        this.vehiculo = vehiculo;
    }
    
    
}
