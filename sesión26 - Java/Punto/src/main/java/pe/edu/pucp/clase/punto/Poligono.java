package pe.edu.pucp.clase.punto;

import java.util.ArrayList;

public class Poligono {

    private ArrayList<Punto2D> vertices;
    private Integer cantidad_vertices;

    public Poligono() {
        this.vertices = new ArrayList<>();
        this.cantidad_vertices = 0;
    }

    public void agregarVertice(Double x, Double y) {
        Punto2D punto = new Punto2D(x, y);
        this.agregarVertice(punto);
    }

    private void agregarVertice(Punto2D punto) {
        this.vertices.add(punto);
    }

    public Double calcularArea() {
        if (this.cantidad_vertices <= 2) {
            return 0.0;
        }
        Double sumatoria1 = 0.0, sumatoria2 = 0.0;
        Punto2D p1 = null, pa = null;
        for (int i = 0; i < this.cantidad_vertices; i++) {
            if (i == 0) {
                p1 = this.vertices.get(i);
            } else {
                Punto2D punto = this.vertices.get(i);
                sumatoria1 += pa.getX() * punto.getY();
                sumatoria2 += punto.getX() * pa.getY();
                if (i == this.cantidad_vertices - 1) {
                    sumatoria1 += punto.getX() * p1.getY();
                    sumatoria2 += p1.getX() * punto.getY();
                }
            }
            pa = this.vertices.get(i);
        }
        return Math.abs((sumatoria1 - sumatoria2) / 2);
    }

    /**
     * @return the cantidad_vertices
     */
    public Integer getCantidad_vertices() {
        return cantidad_vertices;
    }

}
