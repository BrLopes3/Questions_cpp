
#include <iostream>
using namespace std;

void bubbleSort(int numeros[], int n) {
    bool trocou = false;
    do {
        trocou = false;
        
        for (int i = 0; i < n - 1; i++) {
            int primeiroNumero = numeros[i];
            int segundoNumero = numeros[i+1];

            if (primeiroNumero > segundoNumero) {
                numeros[i] = segundoNumero;
                numeros[i + 1] = primeiroNumero;
                trocou = true;
            }
        }


    } while (trocou);

}

void selectionSort(int numeros[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int indiceDoMenor = i;
        for (int j = i+1; j < n; j++) {
            if (numeros[j] < numeros[indiceDoMenor]) {
                indiceDoMenor = j;
            }
        }
        if (i != indiceDoMenor) {
           /* int aux = numeros[i];
            numeros[i] = numeros[indiceDoMenor];
            numeros[indiceDoMenor] = aux;*/

            //a more automatic way to do this with the c++ library
            swap(numeros[i], numeros[indiceDoMenor]);
        }
    }


}

int main()
{
    int vector1[] = { 7,6,5,4,3,2,1 };
    int vector2[] = { 7,6,5,4,3,2,1 };
    selectionSort(vector1, 7);
    bubbleSort(vector2, 7);

    for (int i = 0; i < 7; i++) {
        cout << vector1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 7; i++) {
        cout << vector2[i] << " ";
    }
    cout << endl;

}
