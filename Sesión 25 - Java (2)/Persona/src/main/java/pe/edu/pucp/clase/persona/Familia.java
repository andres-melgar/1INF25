package pe.edu.pucp.clase.persona;

public class Familia {

    private Persona padre;
    private Persona hijo;
    
    public Familia(Persona padre, Persona hijo){
        this.padre = new Persona(padre);
        this.hijo = new Persona(hijo);
    }
    
    
    @Override
    public String toString(){
        String impresion = this.padre.toString();
        impresion += "\n";
        impresion += this.hijo.toString();
        return impresion;
    }
}
