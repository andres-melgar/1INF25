package pe.edu.pucp.inf25.s2024_2.ejemplo;

import java.text.ParseException;
import java.text.SimpleDateFormat;

public class Lab02_2024_1_P3 {

    public static void main(String[] args) throws ParseException {
// Manejando la excepción con un bloque try - catch
//try {
//            Especialidad esp01 = new Especialidad("MEDICINA INTERNA");
//            Especialidad esp02 = new Especialidad("RADIOLOGIA");
//            Especialidad esp03 = new Especialidad("OTORRINOLARINGOLOGIA");
//
////        System.out.println(esp01);
////        System.out.println(esp02);
////        System.out.println(esp03);
//            Medico med01 = new Medico("18282901", "NATALI", "LEIVA", "REYES", esp01, "062258", "030568");
//            Medico med02 = new Medico("13882901", "RAUL", "LEIVA", "REYES", esp02, "059092", "030077");
//            Medico med03 = new Medico("29282901", "LUIS", "LEIVA", "REYES", esp03, "039811", "029899");
//
//            Paciente pac01 = new Paciente("17920084", "PATRICIA", "FERNANDEZ", "TELLO", 3879);
//
////        System.out.println(med01);
////        System.out.println(med02);
////        System.out.println(med03);
////        System.out.println(pac01);
//            Consultorio con01 = new Consultorio(17.8, 'A', 2, "204");
//            SalaEspecializada sal01 = new SalaEspecializada(39.8, 'B', 1, "CAYETANO", true);
//
////        System.out.println(con01);
////        System.out.println(sal01);    
//            SimpleDateFormat sdf = new SimpleDateFormat("dd-MM-yyyy HH:mm");
//            AtencionMedica atm01 = new ConsultaPresencial(pac01, med01, sdf.parse("29-03-2024 16:00"), "DOLOR DE ESPALDA", con01, false);
//            AtencionMedica atm02 = new ExamenDiagnostico(pac01, med02, sdf.parse("45-73-2024-78 67:00:88"), sal01, TipoExamen.ECOGRAFIA);
//            AtencionMedica atm03 = new Teleconsulta(pac01, med03, sdf.parse("01-04-2024 15:30"), "DOLOR DE GARGANTA", Plataforma.ZOOM, "htpp:s//pucp.zoom.us/j/98403730464");
//        } catch (ParseException ex) {
//            Logger.getLogger(Lab02_2024_1_P3.class.getName()).log(Level.SEVERE, null, ex);
//        }

//Lanzamos la excepción al método que la invocó        
        Especialidad esp01 = new Especialidad("MEDICINA INTERNA");
        Especialidad esp02 = new Especialidad("RADIOLOGIA");
        Especialidad esp03 = new Especialidad("OTORRINOLARINGOLOGIA");

//        System.out.println(esp01);
//        System.out.println(esp02);
//        System.out.println(esp03);
        Medico med01 = new Medico("18282901", "NATALI", "LEIVA", "REYES", esp01, "062258", "030568");
        Medico med02 = new Medico("13882901", "RAUL", "LEIVA", "REYES", esp02, "059092", "030077");
        Medico med03 = new Medico("29282901", "LUIS", "LEIVA", "REYES", esp03, "039811", "029899");

        Paciente pac01 = new Paciente("17920084", "PATRICIA", "FERNANDEZ", "TELLO", 3879);

//        System.out.println(med01);
//        System.out.println(med02);
//        System.out.println(med03);
//        System.out.println(pac01);
        Consultorio con01 = new Consultorio(17.8, 'A', 2, "204");
        SalaEspecializada sal01 = new SalaEspecializada(39.8, 'B', 1, "CAYETANO", true);

//        System.out.println(con01);
//        System.out.println(sal01);    
        SimpleDateFormat sdf = new SimpleDateFormat("dd-MM-yyyy HH:mm");
        AtencionMedica atm01 = new ConsultaPresencial(pac01, med01, sdf.parse("29-03-2024 16:00"), "DOLOR DE ESPALDA", con01, false);
        AtencionMedica atm02 = new ExamenDiagnostico(pac01, med02, sdf.parse("30-03-2024 08:30"), sal01, TipoExamen.ECOGRAFIA);
        AtencionMedica atm03 = new Teleconsulta(pac01, med03, sdf.parse("01-04-2024 15:30"), "DOLOR DE GARGANTA", Plataforma.ZOOM, "htpp:s//pucp.zoom.us/j/98403730464");

        pac01.addAtencionMedica(atm01);
        pac01.addAtencionMedica(atm02);
        pac01.addAtencionMedica(atm03);
        
        pac01.listarCitasProgramadas();
    }

}
