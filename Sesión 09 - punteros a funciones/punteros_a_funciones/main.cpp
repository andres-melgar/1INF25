#include <iostream>

using namespace std;

int suma(int a, int b);
int resta(int a, int b);
int ejecuta_operacion(int a, int b, int(*operacion)(int,int));

void test01();

int main() {
    test01();
    return 0;
}

void test01() {
    int resultado = ejecuta_operacion(10, 20, resta);
    cout << resultado << endl;
}

int suma(int a, int b) {
    return a + b;
}
int resta(int a, int b) {
    return a - b;
}

int ejecuta_operacion(int a, int b, int(*operacion)(int,int)) {
    return operacion(a, b);
}