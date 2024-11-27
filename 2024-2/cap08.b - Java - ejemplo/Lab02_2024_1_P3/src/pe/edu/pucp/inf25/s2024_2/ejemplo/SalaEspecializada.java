package pe.edu.pucp.inf25.s2024_2.ejemplo;

public class SalaEspecializada extends AmbienteClinico {

    private String nombre;
    private Boolean posee_equipamiento_imagenologia;

    public SalaEspecializada(Double metraje, char torre, Integer piso, String nombre, Boolean posee_equipamiento_imagenologia) {
        super(metraje, torre, piso);
        this.nombre = nombre;
        this.posee_equipamiento_imagenologia = posee_equipamiento_imagenologia;
    }

    @Override
    public String toString() {
        String resultado = "SALA ESPECIALIZADA: ";
        resultado = resultado.concat(this.getNombre());
        resultado = resultado.concat(super.toString());
        resultado = resultado.concat(" - EQ. IMAGENOLOGIA: ");
        if (this.getPosee_equipamiento_imagenologia())
            resultado = resultado.concat("SI");
        else
            resultado = resultado.concat("NO");
        return resultado;
    }

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
