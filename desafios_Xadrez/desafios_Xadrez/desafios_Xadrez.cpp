
#include <iostream>;
#include <vector>;
using namespace std;

int main()
{
    //entrada representando o tabuleiro de xadrez
    vector<vector<int>> tabuleiro(8, vector<int>(8));

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {

            cin >> tabuleiro[i][j];
        }
    }
    /*0 – para indicar que naquela posição não tem peça; 
    1 – para indicar uma peça aliada; 
    2 – para indicar que naquela posição há uma peça inimiga*/

    //input com a posicao da torre;
    int x, y;
    cin >> x >> y;
    int enemies = 0;
    //varrendo as linhas (percorrendo verticalmente)
    for (int i = x-1; i >= 0; i--) {
        if (tabuleiro[i][y] == 2) {
            enemies++;
            tabuleiro[i][y] = 0;
            break;
        }
        else if (tabuleiro[i][y] == 1) {
            break;
        }
    }
    for (int i = x+1; i < 8; i++) {
        if (tabuleiro[i][y] == 2) {
            enemies++;
            tabuleiro[i][y] = 0;
            break;
        }
        else if (tabuleiro[i][y] == 1) {
            break;
        }
    }
    //percorrendo as colunas (percorrendo horizontalmente)
    for (int i = y-1; i >=0; i--) {
        if (tabuleiro[x][i] == 2) {
            enemies++;
            tabuleiro[x][i] = 0;
            break;
        }
        else if (tabuleiro[x][i] == 1) {
            break;
        }
    }
    for (int i = y+1; i < 8; i++) {
        if (tabuleiro[x][i] == 2) {
            enemies++;
            tabuleiro[x][i] = 0;
            break;
        }
        else if (tabuleiro[x][i] == 1) {
            break;
        }
    }

    cout << enemies << endl;



    return 0;
}
