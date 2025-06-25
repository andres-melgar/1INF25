package pe.edu.pucp.clase.punto;

public class Punto3D extends Punto2D {

    private Double z;

    public Punto3D() {
        super();
        this.z = 0.0;
    }

    public Punto3D(Double x, Double y, Double z) {
        super(x, y);
        this.z = z;
    }
    
    @Override
    public String toString(){
        String impresion = "(";
        impresion += this.getX();
        impresion += ", ";
        impresion += this.getY();
        impresion += ", ";
        impresion += this.getZ();
        impresion += ")";
        return impresion;
    }

    /**
     * @return the z
     */
    public Double getZ() {
        return z;
    }

    /**
     * @param z the z to set
     */
    public void setZ(Double z) {
        this.z = z;
    }
}
