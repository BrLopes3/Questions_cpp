#include <iostream>;
#include <vector>;
#include <algorithm>;
using namespace std;

int main() {
	int n, m; //n=numero de pedras, m=numero de sapos
	int posicao, pulo;
	cin >> n >> m;
	vector <int> pedras;
	if (n >= 1 && n <= 100) {
		
		for (int i = 0; i < n; i++) {
			pedras.push_back(0);
		}
	}

	if (m >= 1 && m <= 100) {

		for (int i = 0; i < m; i++) {
			cin >> posicao >> pulo;
			if (posicao >= 1 && posicao <= n && pulo <= n) {

				pedras[posicao - 1] = 1;

				if ((posicao - 1 - pulo) >= 0 && (posicao - 1 + pulo) < n) {
					pedras[posicao - 1 - pulo] = 1;
					pedras[posicao - 1 + pulo] = 1;
				}

			}

		}

	}

	for (int i = 0; i < n; i++) {
		cout << pedras[i] << endl;
	}
	return 0;
}