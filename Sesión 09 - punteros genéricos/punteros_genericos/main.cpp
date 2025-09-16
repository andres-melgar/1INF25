#include <iostream>

using namespace std;

void test01();
void test02();
void test03();
void test04();
void test05();
void test06();

int main() {
    test06();
    test05();
    test04();
    test03();
    test02();
    test01();
    return 0;
}

// No hacerlo así!!!,
// solo se ha hecho por que lo pidió Giancarlo
void test06() {
    void *p = new void*[3];
    ((void**)p)[0] = new char;
    ((void**)p)[1] = new int;
    ((void**)p)[2] = new double;
    *(char*)((void**)p)[0] = 'A';
    *(int*)((void**)p)[1] = 346;
    *(double*)((void**)p)[2] = 17.98;
    cout << *(char*)((void**)p)[0] << " ";
    cout<< *(int*)((void**)p)[1] << " ";
    cout << *(double*)((void**)p)[2] << endl;
}

void test05() {
    void *p = new void*[3];
    void **arreglo = (void**)p;
    arreglo[0] = new char;
    arreglo[1] = new int;
    arreglo[2] = new double;
    *(char*)arreglo[0] = 'A';
    *(int*)arreglo[1] = 346;
    *(double*)arreglo[2] = 17.98;
    cout << *(char*)arreglo[0] << " ";
    cout<< *(int*)arreglo[1] << " ";
    cout << *(double*)arreglo[2] << endl;
}

void test04() {
    void **p = new void*[3];
    p[0] = new char;
    p[1] = new int;
    p[2] = new double;
    *(char*)p[0] = 'A';
    *(int*)p[1] = 346;
    *(double*)p[2] = 17.98;
    cout << *(char*)p[0] << " ";
    cout<< *(int*)p[1] << " ";
    cout << *(double*)p[2] << endl;
}

void test03() {
    void *p = new char;
    *(char *) p = 'A';
    cout << *(char *) p << " ";

    p = new int;
    *(int *)p = 346;
    cout << *(int*)p << " ";

    p = new double;
    *(double*)p = 17.98;
    cout << *(double*)p << endl;
}

void test02() {
    char *ptrC = new char;
    int *ptrE = new int;
    double *ptrR = new double;
    *ptrC = 'A';
    *ptrE = 346;
    *ptrR = 17.98;
    cout << *ptrC << " " << *ptrE << " " << *ptrR << endl;
}

void test01() {
    char c = 'A';
    int e = 346;
    double r = 17.98;
    char *ptrC = &c;
    int *ptrE = &e;
    double *ptrR = &r;
    cout << *ptrC << " " << *ptrE << " " << *ptrR << endl;
}
