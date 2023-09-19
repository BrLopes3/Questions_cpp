#include <iostream>;
#include <string>;
using namespace std;

int main() {

	string a;
	cin >> a;

	int tamanho = a.length();
	int validacao = 0;

	for (int i = 1; i <= tamanho / 2; i++) {
		if (tamanho % i == 0) {
			string sub = a.substr(0, i);
			int repeticoes = tamanho / i;
			string construcao = "";
			for (int j = 0;j < repeticoes;j++) {
				construcao += sub;
			}
			if (construcao == a) {
				validacao += 1;
			}
			
		}
		
	}
	if (validacao != 0) {
		cout << "VALIDO" << endl;
	}
	else {
		cout << "INVALIDO" << endl;
	}
	

	
}