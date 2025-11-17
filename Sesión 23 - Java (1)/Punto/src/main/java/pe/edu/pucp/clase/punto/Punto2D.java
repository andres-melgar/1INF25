package pe.edu.pucp.clase.punto;

public class Punto2D {
    
    private Double x;
    private Double y;
    
    public Punto2D(){
        this.x = 0.0;
        this.y = 0.0;
    }
    
    public Punto2D(Double x, Double y){
        this.x = x;
        this.y = y;
    }
    
    @Override
    public String toString(){
        String impresion = "(";
        impresion += this.x;
        impresion += ", ";
        impresion += this.y;
        impresion += ")";
        return impresion;
    }

    /**
     * @return the x
     */
    public Double getX() {
        return x;
    }

    /**
     * @param x the x to set
     */
    public void setX(Double x) {
        this.x = x;
    }

    /**
     * @return the y
     */
    public Double getY() {
        return y;
    }

    /**
     * @param y the y to set
     */
    public void setY(Double y) {
        this.y = y;
    }
    
    
    
}
