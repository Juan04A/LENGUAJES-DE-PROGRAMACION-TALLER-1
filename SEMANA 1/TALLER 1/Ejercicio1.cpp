#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    const int N = 10;
    double valores[N];
    double suma = 0.0;

    for (int i = 0; i < N; i++) {
        valores[i] = (rand() % 10000) / 100.0;
        suma += valores[i];
    }

    double promedio = suma / N;

    cout << "Valores generados: ";
    for (int i = 0; i < N; i++) {
        cout << valores[i] << " ";
    }
    cout << endl;

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}