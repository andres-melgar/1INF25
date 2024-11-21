package pe.edu.pucp.inf25.s2024_2.ejemplo;

import java.util.ArrayList;

public class Paciente extends Persona {

    private Integer HCE;
    private ArrayList<AtencionMedica> atencionesMedica; //contenedor que AtencionMedica
    
    public Paciente(String DNI, String nombre, String paterno, String materno, Integer HCE){
        super(DNI, nombre, paterno, materno);
        this.HCE = HCE;
        this.atencionesMedica = new ArrayList<>();        
    }

    /**
     * @return the HCE
     */
    public Integer getHCE() {
        return HCE;
    }

    /**
     * @param HCE the HCE to set
     */
    public void setHCE(Integer HCE) {
        this.HCE = HCE;
    }

    public AtencionMedica getAtencionMedica(Integer index) {
        return this.atencionesMedica.get(index);
    }
    
    public void addAtencionMedica(AtencionMedica atencionMedica) {
        this.atencionesMedica.add(atencionMedica);
    }
}
