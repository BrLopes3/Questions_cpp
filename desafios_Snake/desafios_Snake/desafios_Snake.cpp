#include <iostream>;
#include <vector>;
using namespace std;

int main() {

    int n, m; //n=numero de linhas, m=numero de colunas

    cin >> n >> m;


    //input com valores da matriz
    vector <vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];

        }
    }

    int ovos = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            for (int j = 0; j < m; j++) {
                ovos = ovos + matrix[i][j];
            }
        }
        else {
            for (int j = m - 1; j >= 0; j--) {
                ovos = ovos + matrix[i][j];
            }

        }

        cout << ovos << endl;


        return 0;
        }