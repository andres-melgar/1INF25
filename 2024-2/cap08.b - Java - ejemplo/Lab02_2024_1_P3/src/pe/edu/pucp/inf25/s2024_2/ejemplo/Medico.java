package pe.edu.pucp.inf25.s2024_2.ejemplo;

public class Medico extends Persona {

    private String CMP;
    private Especialidad especialidad; //agregación
    private String numero_registro;

    /**
     * @return the CMP
     */
    public String getCMP() {
        return CMP;
    }

    /**
     * @param CMP the CMP to set
     */
    public void setCMP(String CMP) {
        this.CMP = CMP;
    }

    /**
     * @return the especialidad
     */
    public Especialidad getEspecialidad() {
        return especialidad;
    }

    /**
     * @param especialidad the especialidad to set
     */
    public void setEspecialidad(Especialidad especialidad) {
        this.especialidad = especialidad;
    }

    /**
     * @return the numero_registro
     */
    public String getNumero_registro() {
        return numero_registro;
    }

    /**
     * @param numero_registro the numero_registro to set
     */
    public void setNumero_registro(String numero_registro) {
        this.numero_registro = numero_registro;
    }
}
