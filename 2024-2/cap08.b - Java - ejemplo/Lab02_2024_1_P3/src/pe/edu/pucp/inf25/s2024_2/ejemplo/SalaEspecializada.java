package pe.edu.pucp.inf25.s2024_2.ejemplo;

public class SalaEspecializada extends AmbienteClinico {

    private String nombre;
    private Boolean posee_equipamiento_imagenologia;

    /**
     * @return the nombre
     */
    public String getNombre() {
        return nombre;
    }

    /**
     * @param nombre the nombre to set
     */
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    /**
     * @return the posee_equipamiento_imagenologia
     */
    public Boolean getPosee_equipamiento_imagenologia() {
        return posee_equipamiento_imagenologia;
    }

    /**
     * @param posee_equipamiento_imagenologia the
     * posee_equipamiento_imagenologia to set
     */
    public void setPosee_equipamiento_imagenologia(Boolean posee_equipamiento_imagenologia) {
        this.posee_equipamiento_imagenologia = posee_equipamiento_imagenologia;
    }
}
