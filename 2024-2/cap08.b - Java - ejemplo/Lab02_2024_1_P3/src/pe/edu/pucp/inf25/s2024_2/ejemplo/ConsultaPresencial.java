package pe.edu.pucp.inf25.s2024_2.ejemplo;

public class ConsultaPresencial extends CitaMedica {

    private Consultorio consultorio;
    private Boolean requiere_asistencia;

    /**
     * @return the consultorio
     */
    public Consultorio getConsultorio() {
        return consultorio;
    }

    /**
     * @param consultorio the consultorio to set
     */
    public void setConsultorio(Consultorio consultorio) {
        this.consultorio = consultorio;
    }

    /**
     * @return the requiere_asistencia
     */
    public Boolean getRequiere_asistencia() {
        return requiere_asistencia;
    }

    /**
     * @param requiere_asistencia the requiere_asistencia to set
     */
    public void setRequiere_asistencia(Boolean requiere_asistencia) {
        this.requiere_asistencia = requiere_asistencia;
    }
}