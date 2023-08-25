
#include <iostream>;
#include <vector>;
using namespace std;

int main()
{
    vector<vector<int>> dominos(7,vector<int>(7));
    for (int i = 0;i < 7;i++) {
        for (int j = 0;j < 7;j++) {
			cin >> dominos[i][j];
		}
	}

	int soma = 0;

	for (int i = 0;i < 7;i++) {
		for (int j = 0;j < 7;j++) {
			if (dominos[i][j] == 1 && dominos[j][i]==0) {
				soma++;
			}
			else if (dominos[i][j] == 1 && dominos[i][j] == dominos[j][i]) {
				soma++;
				dominos[j][i] = 0;
			}
		}
	}
	cout << soma << endl;
	return 0;
}
