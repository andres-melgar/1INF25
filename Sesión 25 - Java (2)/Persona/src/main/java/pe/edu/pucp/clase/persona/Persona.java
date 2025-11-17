package pe.edu.pucp.clase.persona;

public class Persona {

    private String paterno;
    private String materno;
    private String nombre;
    
    public Persona(String paterno, String materno, String nombre){
        this.paterno = paterno;
        this.materno = materno;
        this.nombre = nombre;
    }

    public Persona(Persona persona){
        this.paterno = persona.paterno;
        this.materno = persona.materno;
        this.nombre = persona.nombre;
    }
    
    @Override
    public String toString(){
        String impresion = this.getPaterno();
        impresion += " ";
        impresion += this.getMaterno();
        impresion += ", ";
        impresion += this.getNombre();
        return impresion;
    }

    /**
     * @return the paterno
     */
    public String getPaterno() {
        return paterno;
    }

    /**
     * @param paterno the paterno to set
     */
    public void setPaterno(String paterno) {
        this.paterno = paterno;
    }

    /**
     * @return the materno
     */
    public String getMaterno() {
        return materno;
    }

    /**
     * @param materno the materno to set
     */
    public void setMaterno(String materno) {
        this.materno = materno;
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

    
}
