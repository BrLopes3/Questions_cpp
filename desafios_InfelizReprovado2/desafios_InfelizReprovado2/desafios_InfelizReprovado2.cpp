
#include <iostream>
using namespace std;

int main()
{
	int nota, menorNota, instancia = 1, n;
	string nome, menorNome;

	while (cin >> n) {

		menorNota = 20;

		while (n--) {
			cin >> nome >> nota;

			if (nota < menorNota) {
				menorNota = nota;
				menorNome = nome;
			}
			else if (nota == menorNota && nome > menorNome) {
				menorNome = nome;
			}
		}

		cout << "Instancia " << instancia++ << endl;
		cout << menorNome << endl;

	}
   

	return 0;
}


