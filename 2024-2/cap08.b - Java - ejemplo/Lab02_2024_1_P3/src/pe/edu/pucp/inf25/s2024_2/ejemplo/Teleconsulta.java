package pe.edu.pucp.inf25.s2024_2.ejemplo;

public class Teleconsulta extends CitaMedica {

    private Plataforma plataforma;
    private String enlace;

    /**
     * @return the plataforma
     */
    public Plataforma getPlataforma() {
        return plataforma;
    }

    /**
     * @param plataforma the plataforma to set
     */
    public void setPlataforma(Plataforma plataforma) {
        this.plataforma = plataforma;
    }

    /**
     * @return the enlace
     */
    public String getEnlace() {
        return enlace;
    }

    /**
     * @param enlace the enlace to set
     */
    public void setEnlace(String enlace) {
        this.enlace = enlace;
    }
}
