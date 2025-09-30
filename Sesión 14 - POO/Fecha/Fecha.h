#ifndef FECHA_FECHA_H
#define FECHA_FECHA_H

class CFecha {
private:
    int dia;
    int mes;
    int año;

public:
    CFecha();

    CFecha(int dia, int mes, int año);

    void imprimir();

    bool es_bisiesto();

    void incrementar_dia();

    void setDia(int dia);

    void setMes(int mes);

    void setAño(int año);

    int getDia();

    int getMes();

    int getAño();
private:
    int obtener_dias_por_mes();

    int obtener_dias_por_mes(int mes, int año);

    void setear_fecha_por_defecto();

    bool es_fecha_valida(int dia, int mes, int año);

    bool es_mes_valido(int mes);

    bool es_dia_valido(int dia, int mes, int año);

    bool es_bisiesto(int año);
};


#endif //FECHA_FECHA_H