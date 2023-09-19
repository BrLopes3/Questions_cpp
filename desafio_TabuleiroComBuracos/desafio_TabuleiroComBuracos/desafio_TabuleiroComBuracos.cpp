
#include <iostream>;
#include <vector>;
using namespace std;

int main() {
    //tabuleiro com buracos representados pelo numero 0 e 1
    int tabuleiro[8][8]{};
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i == 1 && j == 3) || (i == 2 && j == 3) || (i == 2 && j == 5) || (i == 5 && j == 4)) {
                tabuleiro[i][j] = 0;
            }
            else {
                tabuleiro[i][j] = 1;
            }
        }
    }
    int x = 4; //valor da linha inicial da posicao do cavalo
    int y = 3; //valor da coluna inicial da posicao do cavalo
    int posicaoCavalo = tabuleiro[x][y];

    int numeroMovimentos;
    int movimento;
    
    cin >> numeroMovimentos;
    int i = 0;
    while (i < numeroMovimentos) {
        cin >> movimento;
        if (movimento == 1) {
			x = x + 1;
			y = y + 2;
            if (x >= 0 && x <= 7 && y >= 0 && y <= 7) {
                posicaoCavalo = tabuleiro[x][y];
            }
		}
        if (movimento == 2) {
			x = x + 2;
			y = y + 1;
            if (x >= 0 && x <= 7 && y >= 0 && y <= 7) {
                posicaoCavalo = tabuleiro[x][y];
            }
		}
        if (movimento == 3) {
			x = x + 2;
			y = y - 1;
            if (x >= 0 && x <= 7 && y >= 0 && y <= 7) {
                posicaoCavalo = tabuleiro[x][y];
            }
		}
        if (movimento == 4) {
			x = x + 1;
			y = y - 2;
            if (x >= 0 && x <= 7 && y >= 0 && y <= 7) {
                posicaoCavalo = tabuleiro[x][y];
            }
		}
        if (movimento == 5) {
			x = x - 1;
			y = y - 2;
            if (x >= 0 && x <= 7 && y >= 0 && y <= 7) {
                posicaoCavalo = tabuleiro[x][y];
            }
		}
        if (movimento == 6) {
			x = x - 2;
			y = y - 1;
            if (x >= 0 && x <= 7 && y >= 0 && y <= 7) {
                posicaoCavalo = tabuleiro[x][y];
            }
		}
        if (movimento == 7) {
			x = x - 2;
			y = y + 1;
            if (x >= 0 && x <= 7 && y >= 0 && y <= 7) {
                posicaoCavalo = tabuleiro[x][y];
            }
		}
        if (movimento == 8) {
			x = x - 1;
			y = y + 2;
            if (x >= 0 && x <= 7 && y >= 0 && y <= 7) {
                posicaoCavalo = tabuleiro[x][y];
            }
		}
        if (posicaoCavalo == 0) {
            i++;
            break;
        }
        else if (posicaoCavalo == 1) {
            i++;
        }

    }
    cout << i << endl;


}

