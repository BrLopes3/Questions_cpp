
#include <iostream>;
#include <cassert>;
#include <vector>;
#include <regex>;
#include <algorithm>;

using namespace std;

int main()
{
    int n, instancia = 1;
    cin >> n;
    assert(n >= 1 && n <= 100);

    struct aluno {
        string nome;
        int numProblem;
    };

    vector<aluno> alunos(n);

    int i = 0;
    while (i<n) {
        cin >> alunos[i].nome >> alunos[i].numProblem;  
        i = i++;
    }

    aluno t;

    for (i = 0; i < alunos.size();i++) {
        for (int j = i + 1; j < alunos.size();j++) {
            if (alunos[i].nome > alunos[j].nome) {

                t = alunos[j];
                alunos[j] = alunos[i];
                alunos[i] = t;

            }
        }
    }

    int minNumber = alunos[0].numProblem;
    string minName = alunos[0].nome;
    int inst;
    for (i = 0; i < alunos.size(); i++) {
        if (alunos[i].numProblem <= minNumber) {
            minNumber = alunos[i].numProblem;
            minName = alunos[i].nome;
           
        }
  
    }

        cout << "\n" << "Instancia " << instancia++ << endl;
        cout << minName << endl;

}
