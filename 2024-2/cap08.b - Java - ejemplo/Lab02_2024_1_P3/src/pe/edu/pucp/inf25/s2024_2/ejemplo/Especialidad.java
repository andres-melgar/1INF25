package pe.edu.pucp.inf25.s2024_2.ejemplo;

public class Especialidad {

    private String nombre;

    public Especialidad(String nombre) {
        this.nombre = nombre;
    }
    
    @Override
    public String toString(){
        return "ESPECIALIDAD: " + this.nombre;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
}
