#ifndef FECHA_FECHA_H
#define FECHA_FECHA_H

class CFecha {
private:
    int dia;
    int mes;
    int año;

public:
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
};


#endif //FECHA_FECHA_H