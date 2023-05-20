#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; //qtd de pessoas na fila

    cin >> n;


    int *p = new int[n]; //array de identificadores de pessoas na fila

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int m; //qtd pessoas que deixaram a fila

    cin >> m;

    int *l = new int[m]; //array de identificadores de pessoas que deixaram a fila

    for (int i = 0; i < m; i++) {
        cin >> l[i];

    }



    int k = n - m; //numero de pessoas que ficaram na fila

    vector<int> pessoas; // vetor de identificadores de pessoas que ficaram na fila;

    int t = 0;

    for (int i = 0; i < n; i++) {


        for (int j = 0; j < m; j++) {



            if (p[i] == l[j]) {  //se algum dos valores do segundo array for igual ao valor do primeiro eu adiciono o valor 1 a variavel t
                t += 1;
            }

        }
        if (t == 0) { // se a variavel t for zero quer dizer que nenhum dos valores do segundo array era igual ao primeiro
            pessoas.push_back(p[i]); // portanto esse valor pode ser acrescentado ao vetor
        }
        t = 0; //reinicia a variavel t com o valor 0

    }


    for (int i = 0; i < k; i++) {
        cout << pessoas[i] << " ";
    }


    return 0;
}

