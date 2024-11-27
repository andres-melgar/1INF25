package pe.edu.pucp.inf25.s2024_2.ejemplo;

public class Persona {

    private String DNI;
    private String paterno;
    private String materno;
    private String nombre;

    public Persona(String DNI, String nombre, String paterno, String materno) {
        this.DNI = DNI;
        this.paterno = paterno;
        this.materno = materno;
        this.nombre = nombre;
    }

    @Override
    public String toString() {
        String resultado = this.getNombre();
        resultado = resultado.concat(" ");
        resultado = resultado.concat(this.getPaterno());
        resultado = resultado.concat(" ");
        resultado = resultado.concat(this.getMaterno());

//        String resultado = this.getPaterno();
//        resultado = resultado.concat(" ");
//        resultado = resultado.concat(this.getMaterno());
//        resultado = resultado.concat(", ");
//        resultado = resultado.concat(this.getNombre());

        return resultado;
    }

    /**
     * @return the DNI
     */
    public String getDNI() {
        return DNI;
    }

    /**
     * @param DNI the DNI to set
     */
    public void setDNI(String DNI) {
        this.DNI = DNI;
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
