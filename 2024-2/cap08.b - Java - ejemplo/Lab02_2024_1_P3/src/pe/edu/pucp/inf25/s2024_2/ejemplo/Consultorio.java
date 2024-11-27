package pe.edu.pucp.inf25.s2024_2.ejemplo;

public class Consultorio extends AmbienteClinico {

    private String numero;

    public Consultorio(Double metraje, char torre, Integer piso, String numero) {
        super(metraje, torre, piso);
        this.numero = numero;
    }
    
    @Override
    public String toString(){
        String resultado = "CONSULTORIO: ";
        resultado = resultado.concat(this.getNumero());
        resultado = resultado.concat(super.toString());
        return resultado;
    }

    /**
     * @return the numero
     */
    public String getNumero() {
        return numero;
    }

    /**
     * @param numero the numero to set
     */
    public void setNumero(String numero) {
        this.numero = numero;
    }
}
