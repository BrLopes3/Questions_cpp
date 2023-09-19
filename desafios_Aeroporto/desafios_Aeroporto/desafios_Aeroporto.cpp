#include <iostream>;
#include <vector>;
#include <algorithm>;
using namespace std;

int main() {
	int nAero, nVoos;
	int maximoTrafego;
	int maximoIndice;
	int x = 0, y = 0;
	vector<int> indiceMaximoTrafego;
	vector<vector<int>> respostas;
	vector<int> aeroportos(101);
	
	while (cin >> nAero >> nVoos) {
		//aeroportos.resize(101);
		if (nAero != 0 && nVoos != 0) {
			for (int i = 0; i < nVoos; i++) {
				cin >> x >> y;
				aeroportos[x]++;
				aeroportos[y]++;
			}
			int maximoTrafego = aeroportos[0];
			int maximoIndice = 0;
			
			for (int i = 0; i < aeroportos.size(); i++) {
				if (aeroportos[i] >= maximoTrafego) {
					maximoTrafego = aeroportos[i];
					maximoIndice = i;
				}
			}
			indiceMaximoTrafego.push_back(maximoIndice); //indice com o maior numero de repeticoes
			for (int i = 0; i < aeroportos.size(); i++) {
				if (aeroportos[i] == maximoTrafego && i != maximoIndice) {
					indiceMaximoTrafego.push_back(i); //indices com o mesmo numero de repeticoes
				}
			}
			int t;
			for (int i = 0; i < indiceMaximoTrafego.size(); i++) {
				for (int j = i + 1; j < indiceMaximoTrafego.size(); j++) {

					if (indiceMaximoTrafego[i] > indiceMaximoTrafego[j]) {
						t = indiceMaximoTrafego[i];
						indiceMaximoTrafego[i] = indiceMaximoTrafego[j];
						indiceMaximoTrafego[j] = t;
					}

				}
			}
			//inserir vetor indiceMaximoTrafego no vetor de respostas
			respostas.push_back(indiceMaximoTrafego);
			
			//limpar vetor indiceMaximoTrafego para a proxima iteracao
			for (int i = 0;i<aeroportos.size();i++) {
				aeroportos[i] = 0;
			}
			maximoTrafego = aeroportos[0];
			maximoIndice = 0;
			indiceMaximoTrafego.clear();
			
		}
		else {
			break;

			
		}

	}
	int i = 0;

	for (int i = 0; i < respostas.size();i++) {
		cout << "Teste " << i+1 << endl;
		for (int j = 0; j < respostas[i].size(); j++) {
			cout << respostas[i][j] << " ";
		}
		cout << endl;
		cout << "" << endl;
	}
	
	
	return 0;
}
