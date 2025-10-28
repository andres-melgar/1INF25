#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include "CPersona.h"

using namespace std;

template <typename T>
void imprimir_vector(vector<T> arreglo);

void test01();
void test02();
void test03();
void test04();
void test05();

int main() {
    //test01();
    //test02();
    //test03();
    //test04();
    test05();
    return 0;
}

void test05() {
    cout << "test05" << endl;
    vector<CPersona> arreglo;
    CPersona andres("Melgar", "Sasieta", "Andres");
    CPersona rony("Cueva", "Erazo", "Rony");

    arreglo.push_back(andres);
    arreglo.push_back(rony);
    imprimir_vector(arreglo);
}

void test04() {
    cout << "test04" << endl;
    vector<int> arreglo = {5, 7, 8, 3, 6, 1};
    imprimir_vector(arreglo);
    sort(arreglo.begin(), arreglo.end());
    imprimir_vector(arreglo);
    sort(arreglo.rbegin(), arreglo.rend());
    imprimir_vector(arreglo);
}

void test03() {
    cout << "test03" << endl;
    vector<int> arreglo;
    arreglo.push_back(10);
    arreglo.push_back(20);
    arreglo.push_back(30);
    cout << arreglo[0] << endl;
}

void test02() {
    cout << "test02" << endl;
    vector<int> arreglo;
    arreglo.push_back(10);
    arreglo.push_back(20);
    arreglo.push_back(30);
    imprimir_vector(arreglo);
}

void test01() {
    cout << "test01" << endl;
    vector<int> arreglo1;
    vector<double> arreglo2;
    vector<string> arreglo3;
    vector<void*> arreglo4;
    vector<vector<double>> arreglo5;
}

template <typename T>
void imprimir_vector(vector<T> arreglo) {
    for (T dato: arreglo) {
        cout << setw(5) << dato;
    }
    cout << endl;
}
