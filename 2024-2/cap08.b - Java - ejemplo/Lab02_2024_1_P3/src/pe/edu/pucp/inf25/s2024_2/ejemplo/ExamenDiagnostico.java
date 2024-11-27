package pe.edu.pucp.inf25.s2024_2.ejemplo;

import java.util.Date;

public class ExamenDiagnostico extends AtencionMedica {

    private SalaEspecializada salaEspecializada;
    private TipoExamen tipo_de_examen;

    public ExamenDiagnostico(Paciente paciente, Medico medico, Date fecha_atencion, SalaEspecializada salaEspecializada, TipoExamen tipo_de_examen){ 
        super(paciente, medico, fecha_atencion);
        this.salaEspecializada = salaEspecializada;
        this.tipo_de_examen = tipo_de_examen;
    }
    
    /**
     * @return the salaEspecializada
     */
    public SalaEspecializada getSalaEspecializada() {
        return salaEspecializada;
    }

    /**
     * @param salaEspecializada the salaEspecializada to set
     */
    public void setSalaEspecializada(SalaEspecializada salaEspecializada) {
        this.salaEspecializada = salaEspecializada;
    }

    /**
     * @return the tipo_de_examen
     */
    public TipoExamen getTipo_de_examen() {
        return tipo_de_examen;
    }

    /**
     * @param tipo_de_examen the tipo_de_examen to set
     */
    public void setTipo_de_examen(TipoExamen tipo_de_examen) {
        this.tipo_de_examen = tipo_de_examen;
    }
}
