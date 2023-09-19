
#include <iostream>;
#include <vector>;
#include <algorithm>;
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    //criar vetor que armazena o valor das somas de cada linha
    vector<int> sumRow;
    int temp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            temp = temp + matrix[i][j];
        }
        sumRow.push_back(temp);
        temp = 0;
    }
    //criar vetor que armazena o valor das somas de cada coluna
    vector<int> sumCol;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            temp = temp + matrix[i][j];
        }
        sumCol.push_back(temp);
        temp = 0;
    }

    int maiorSomaLinha = sumRow[0];
    int maiorSomaCol = sumCol[0];

    for (int i = 0; i < sumRow.size(); i++) {
        if (sumRow[i] >= maiorSomaLinha) {
            maiorSomaLinha = sumRow[i];
        }
    }
   
    for (int i = 0; i < sumCol.size(); i++) {
        if (sumCol[i] >= maiorSomaCol) {
            maiorSomaCol = sumCol[i];
        }
    }
    if (maiorSomaLinha > maiorSomaCol) {
        cout << maiorSomaLinha << endl;
    }
    else {
        cout << maiorSomaCol << endl;
    }
    

}

