#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    const int N = 500;
    int pares = 0;
    int impares = 0;

    for (int i = 0; i < N; i++) {
        int valor = 50 + rand() % 51;
        if (valor % 2 == 0)
            pares++;
        else
            impares++;
    }

    cout << "Cantidad de pares: " << pares << endl;
    cout << "Cantidad de impares: " << impares << endl;

    return 0;
}