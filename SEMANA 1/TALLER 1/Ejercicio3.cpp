#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(time(0));

    const int N = 25;
    string sucursales[N];
    double ventas[N];
    double suma = 0.0;

    for (int i = 0; i < N; i++) {
        sucursales[i] = "Sucursal " + to_string(i + 1);
        ventas[i] = 1000 + rand() % 9001;
        suma += ventas[i];
    }

    double promedio = suma / N;

    cout << "Promedio de ventas: " << promedio << endl;
    cout << "Sucursales por encima del promedio:" << endl;
    for (int i = 0; i < N; i++) {
        if (ventas[i] > promedio) {
            cout << sucursales[i] << ": " << ventas[i] << endl;
        }
    }

    return 0;
}