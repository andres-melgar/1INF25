package pe.edu.pucp.clase.punto;

public class Principal {

    public static void main(String[] args){
        Poligono poligono = new Poligono();
        poligono.agregarVertice(10.00, 20.00);
        poligono.agregarVertice(25.00, 30.00);
        poligono.agregarVertice(35.00, 15.00);
        System.out.println(poligono);
    }
}
