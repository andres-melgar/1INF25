package pe.edu.pucp.inf25.s2024_2.ejemplo;

public class Lab02_2024_1_P3 {

    public static void main(String[] args) {
        Especialidad esp01 = new Especialidad("MEDICINA INTERNA");
        Especialidad esp02 = new Especialidad("RADIOLOGIA");
        Especialidad esp03 = new Especialidad("OTORRINOLARINGOLOGIA");
        
        Medico med01 = new Medico("18282901", "NATALI", "LEIVA", "REYES", esp01, "062258", "030568");
        Medico med02 = new Medico("13882901", "RAUL", "LEIVA", "REYES", esp01, "062258", "030568");
        Medico med03 = new Medico("29282901", "LUIS", "LEIVA", "REYES", esp01, "062258", "030568");
    }
    
}
