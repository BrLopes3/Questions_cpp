
#include <iostream>
//#include <algorithm>
using namespace std;

int main()
{
    //a = n. de chic de farinha , b = n. de ovos, c = n. de colheres de leite

    int a, b, c;
    cin >> a >> b >> c;

    if (a, b, c >= 1 && a, b, c <= 100) {

        int na, nb, nc;
        na = a / 2;
        nb = b / 3;
        nc = c / 5;

        int cakes[] = { na, nb, nc }; // array para armazenar o numero de bolos que cada igrediente poderia fazer
        //porem como o bolo so pode ser feito com todos os igredientes, precisamos limitar pelo valor minimo 
        int num_cakes;
        int t;
        //reordenar o array em ordem crescente, entao o minimo valor ficara na posicao 0
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 3; j++) {
                if (cakes[j] < cakes[i]) {
                    t = cakes[j];
                    cakes[j] = cakes[i];
                    cakes[i] = t;
                }
            }
        }
        
        num_cakes = cakes[0];
        cout << num_cakes << endl;
        
    }
    

    return 0;
}

