
#include <iostream>;
#include <vector>;
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m; //n = numero de casas, m = numero de cartas
    vector<int> casas(n);
    vector<int> cartas(m);

    for (int i = 0; i < n; i++) {
        cin>>casas[i];
    }

    for (int i = 0; i < m; i++) {
		cin>>cartas[i];
	}
    
    int ponteiro = casas[0];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if ()
        }
    }
}

