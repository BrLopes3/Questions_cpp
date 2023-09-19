
#include <iostream>;
#include <vector>;
using namespace std;

int main()
{
    //inteiro ‘N’ (3 ≤ N ≤ 100), indicando que a matriz que representa o espaço possui dimensões NxN
    //um inteiro ‘M’(1 ≤ M ≤ 1000), indicando o número de teleportes realizados por Luke.
    int n,m;
    cin >> n >> m;
    /*As próximas ‘N’ linhas possuem ‘N’ inteiros em cada uma, cujos valores podem ser 0
    (se não existe nave naquele quadrante) ou 1 (se existe uma nave naquele quadrante).*/
    vector <vector<int>> matrix(n,vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    /*Nas próximas ‘M’ linhas serão dadas as coordenadas inteiras
    (L – linha C - coluna) de cada teleporte de Luke, um por linha*/
    int numberTie = 0;
    int l, c;
    int position;
    for (int i = 0; i < m; i++) {
        cin >> l >> c;
        position = matrix[l][c];
        for (int j = l-1; j >= 0; j--) {
            if (matrix[j][c] == 1) {
                numberTie++;
                break;
            }
        }
    }

    cout << numberTie << endl;


}
