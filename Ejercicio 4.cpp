#include <iostream>
#include <array>

using namespace std;

int main() {
    // Declaración de arreglos

    //Arreglos que se inicializarán de forma aleatoria
    array<int, 1000> A{};
    array<int, 1000> B{};

    //Arreglo que contiene la suna de A y B
    array<int, 1000> C{};

    //Ciclo para asignar núm aleatorios y realizar la suma
    for(int i=0; i<1000; i++){
        A[i] = (rand() % 100) +1;
        B[i] = (rand() % 100) +1;
        C[i] = A[i] + B[i];
        cout << C[i] << " ";
    }
    return 0;
}
