#include <iostream>

using namespace std;
#define N 10

int main() {

    //Definición de un arreglo
    int arr[N]{[0]:0};

    //Iterar un arreglo
    for(int i=0; i<N; i++){
        arr{i} = i+i;
        cout << arr{i} << "\t";
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
