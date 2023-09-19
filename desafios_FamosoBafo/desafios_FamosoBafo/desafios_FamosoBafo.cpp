using namespace std;
#include <iostream>
#include <vector>;

int main()
{
	int rodadas;
	int aldo, beto;
	int TotalAldo=0, TotalBeto=0;
	vector <int> CartasAldo;
	vector <int> CartasBeto;

	while (cin >> rodadas) {

		if (rodadas != 0) {
			
			for (int i = 0; i < rodadas;i++) {
				cin >> aldo >> beto;
				TotalAldo = TotalAldo + aldo;
				TotalBeto = TotalBeto + beto;
			}
			CartasAldo.push_back(TotalAldo);
			CartasBeto.push_back(TotalBeto);
			TotalAldo = 0;
			TotalBeto = 0;
		}
		else {

			for (int i = 0; i < CartasAldo.size(); i++) {
				if (CartasAldo[i] > CartasBeto[i]) {
					cout<<"Teste "<<i+1<<endl;
					cout << "Aldo" << endl;
					cout <<""<< endl;
				}
				else {
					cout << "Teste " << i + 1 << endl;
					cout << "Beto" << endl;
					cout << "" << endl;
				}
			}
			

		}
		

	}
}

