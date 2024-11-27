package pe.edu.pucp.inf25.s2024_2.ejemplo;

import java.util.Date;

public class CitaMedica extends AtencionMedica {

    protected String motivo;

    public CitaMedica(Paciente paciente, Medico medico, Date fecha_atencion, String motivo){
        super(paciente, medico, fecha_atencion);
        this.motivo = motivo;
    }
    
    /**
     * @return the motivo
     */
    public String getMotivo() {
        return motivo;
    }

    /**
     * @param motivo the motivo to set
     */
    public void setMotivo(String motivo) {
        this.motivo = motivo;
    }
}
