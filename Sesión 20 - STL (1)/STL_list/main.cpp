#include <iostream>
#include <iomanip>
#include <list>

using namespace std;
template <typename T>
void imprime_lista(list<T> lista);

void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
void test07();

int main() {
    //test01();
    //test02();
    //test03();
    //test04();
    //test05();
    //test06();
    test07();
    return 0;
}

void test07() {
    cout << "test07" << endl;
    list<double> lista2 {5.5, 2.5, 3.5, 4.5, 1.5};

    imprime_lista(lista2);

    list<double>::iterator it = lista2.begin();
    for (int i=0; i<3; i++, it++);
    lista2.insert(it, 7.5);
    imprime_lista(lista2);
}

void test06() {
    cout << "test06" << endl;
    list<double> lista2 {5.5, 2.5, 3.5, 4.5, 1.5};

    imprime_lista(lista2);
    lista2.push_back(0.5);
    lista2.push_front(6.5);
    imprime_lista(lista2);
}

void test05() {
    cout << "test05" << endl;
    list<int> lista1 {3, 2, 1,  5, 4};
    list<double> lista2 {5.5, 2.5, 3.5, 4.5, 1.5};

    imprime_lista(lista1);
    imprime_lista(lista2);
}

void test04() {
    cout << "test04" << endl;
    list<double> lista1 {3.0, 2.0, 1.0, 5.0, 4.0};
    list<double> lista2 {5.5, 2.5, 3.5, 4.5, 1.5};

    imprime_lista(lista1);
    imprime_lista(lista2);
}

void test03() {
    cout << "test03" << endl;
    list<double> lista1 {3.0, 2.0, 1.0, 5.0, 4.0};
    list<double> lista2 {5.5, 2.5, 3.5, 4.5, 1.5};

    // for (int i=0; i< lista1.size(); i++) {
    //     double x= lista1.get
    // }
    for (double x : lista1) {
        cout << setw(5) << x;
    }
    cout << endl;
    for (double x : lista2) {
        cout << setw(5) << x;
    }
    cout << endl;
}

void test02() {
    cout << "test02" << endl;
    list<double> lista1 {3.0, 2.0, 1.0, 5.0, 4.0};
    list<double> lista2 {5.5, 2.5, 3.5, 4.5, 1.5};

    cout << "Número de elementos (1): " << lista1.size() << endl;
    cout << "Número de elementos (2): " << lista2.size() << endl;
}

void test01() {
    cout << "test01" << endl;
    list<int> lista1;
    list<double> lista2;
    list<char> lista3;
    list<void*> lista4;
    list<list<int>> lista5;
}

template <typename T>
void imprime_lista(list<T> lista) {
    for (T x : lista) {
        cout << setw(5) << x;
    }
    cout << endl;
}