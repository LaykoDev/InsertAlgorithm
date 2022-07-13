#include <iostream>
#include <conio.h>

int main(){
    int numeros[5];
    int a, pos, aux; //definimos a y b para no tener que andar haciendolo en cada bucle

    for(a=0;a<5;a++){
        std::cout << "Introduce un numero desordenado para calcular su algoritmo de ordenacion por el metodo de insercion: ";
        std::cin >> numeros[a];
    }

    for(a=0;a<5;a++){
        pos = a; //la posicion es la flechita, necesitamos un numero para saber el numero en el que esamos
        aux = numeros[a];

        while((pos > 0) && (numeros[pos-1] > aux)){
            numeros[pos] = numeros[pos-1];
            pos--;
        }
        numeros[pos] = aux;
    }

    std::cout << "\nA:";
    for(a=0;a<5;a++){
        std::cout << " | " << numeros[a] << " | ";
    }
    std::cout << "\nD:";
    for(a=4;a>=0;a--){
        std::cout << " | " << numeros[a] << " | ";
    }

    getch();
    return 0;
}