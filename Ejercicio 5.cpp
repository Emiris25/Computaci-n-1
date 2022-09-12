#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    // Definición de una matriz 10x10
    int A[10][10]={};
    int traza = 0;

    //Inicializar matriz con números aleatorios
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            A [i][j] = (rand()% 100)+1;
            // TODO:
            //Validación si i y j son iguales
            //Suma de diagonal principal
            if (i == j)
            traza = traza + A[i][j];
            cout << traza << endl;
        }
    }
    return 0;
}
