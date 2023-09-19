#include <iostream>;
#include <vector>;
#include <algorithm>;
using namespace std;

int main() {
    int n;
    cin >> n; //numero de alunos
    int nota;

    //vetor com notas possiveis
    vector <int> freqNotas(101);
    for (int i = 0; i < n; i++) {
        //notas dos alunos
        cin >> nota;
        freqNotas[nota]++;
    }
    int freqResult = freqNotas[0];
    int result;
    for (int i = 0; i < 101; i++) {
        if (freqNotas[i] >= freqResult) {
			freqResult = freqNotas[i];
            result = i;
		}
	}
    cout << result << endl;
    
    
    return 0;
}