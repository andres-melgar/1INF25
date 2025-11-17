package pe.edu.pucp.clase.punto;

import java.util.ArrayList;

public class Poligono {

    private ArrayList<Punto2D> vertices;
    private int cantidad_vertices;

    public Poligono() {
        this.vertices = new ArrayList<>();
        this.cantidad_vertices = 0;
    }

    public void agregarVertice(Double x, Double y) {
        Punto2D punto = new Punto2D(x, y);
        this.agregarVertice(punto);
    }

    public void agregarVertice(Punto2D punto) {
        this.vertices.add(punto);
    }

    @Override
    public String toString() {
        String cadena = "";
//        for (int i = 0; i < this.vertices.size(); i++) {
//            Punto2D punto = this.vertices.get(i);
//            cadena = cadena.concat(punto.toString());
//            cadena = cadena.concat("->");
//        }
//Esta segunda forma es conocida en C# como foreach
        for (Punto2D punto : this.vertices) {
            cadena = cadena.concat(punto.toString());
            cadena = cadena.concat("->");
        }
        cadena = cadena.concat("fin");        
        return cadena;
    }

    /**
     * @return the cantidad_vertices
     */
    public int getCantidad_vertices() {
        return cantidad_vertices;
    }

    /**
     * @param cantidad_vertices the cantidad_vertices to set
     */
    public void setCantidad_vertices(int cantidad_vertices) {
        this.cantidad_vertices = cantidad_vertices;
    }

}
