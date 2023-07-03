
#include <iostream>;
#include <vector>;
using namespace std;

const int MAX_ALUNOS = 1000;
int main()
{
    int i, indice_melhor, n;
    int turma = 1;
    struct
    {
       int codigo, media;
    } alunos[MAX_ALUNOS];

    // le numero de alunos da primeira turma
    int maiorIndice;
    vector <int> maioresNotas;
    vector <vector<int>> alunosEscolhidos;

    while (cin >> n)
    {
        if (n != 0) {
            maiorIndice = 0;
            // le dados dos alunos
            for (i = 0; i < n; i++) {
                cin >> alunos[i].codigo >> alunos[i].media;
            }

            //seleciona o(s) aluno(s) de maior media
            for (i = 1; i < n; i++) {
                if (alunos[i].media >= alunos[maiorIndice].media) {
                    maiorIndice = i;
                }
            }

            // procura aluno de maior media

            for (i = 0; i < n; i++) {
                if (alunos[i].media == alunos[maiorIndice].media) {
                    maioresNotas.push_back(alunos[i].codigo);
                }
            }

            alunosEscolhidos.push_back(maioresNotas);

            maioresNotas.clear(); //zera o vetor para a proxima turma
        }
        else {

            // escreve resposta
            for (int i = 0; i < alunosEscolhidos.size();i++) {
                cout << "Turma " << i+1 << endl;
                for (int j = 0; j < alunosEscolhidos[i].size();j++) {
					cout << alunosEscolhidos[i][j] << " ";
				}
                cout << endl;
                cout << "" << endl;
            }
		}
       
    }
    return 0;
}
