#include <iostream>;
#include <vector>;
using namespace std;

int main()
{
    int n, m; // n = numero de linhas , m = numero de colunas
    cin >> n >> m;
    vector<vector<int>> matriz(n, vector<int>(m));
    for (int i = 0; i < n; i++) // preenche a matriz
    {
        for (int j = 0; j < m; j++)
        {
			cin >> matriz[i][j];
		}
	}

    int p; // tipo do pokemon que o Ash quer capturar
    cin >> p;
    int pok = 0; // contador de pokemons do tipo p
    for (int i = 0; i < n; i++) // percorre a matriz
    {
        for (int j = 0; j < m; j++)
        {
            if (matriz[i][j] == p) // se o pokemon for do tipo p
            {
				pok++; // incrementa o contador
			}
		}
	}
    cout << "Ash pegou " << pok << " pokemon" << endl;

}

