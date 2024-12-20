package pe.edu.pucp.inf25.s2024_2.ejemplo;

import java.util.ArrayList;

public class Paciente extends Persona {

    private Integer HCE;
    private ArrayList<AtencionMedica> atencionesMedica; //contenedor que AtencionMedica

    public Paciente(String DNI, String nombre, String paterno, String materno, Integer HCE) {
        super(DNI, nombre, paterno, materno);
        this.HCE = HCE;
        this.atencionesMedica = new ArrayList<>();
    }

    @Override
    public String toString() {
        String resultado = "PACIENTE: ";
        resultado = resultado.concat(this.getDNI());
        resultado = resultado.concat(" - ");
        resultado = resultado.concat(super.toString());        
        return resultado;
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

    public void listarCitasProgramadas() {
        for(AtencionMedica atencion_medica: this.atencionesMedica){
            //if (!(atencion_medica instanceof ExamenDiagnostico))
            if (atencion_medica instanceof CitaMedica)
                System.out.println(atencion_medica.toString());
        }
    }
}
