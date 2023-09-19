#include <iostream>;
#include <vector>;
using namespace std;
int f91(int n) {
    int result;
    if (n <= 100) {
        result = f91(f91(n + 11));
    }
    else if (n >= 101) {
        result = n - 10;
    }

    return result;
}

int main() {
    int n;
    int resposta;
    vector<int> testes;
    vector <int> respostaTestes;
    while (cin >> n) {
        if (n != 0) {
            resposta = f91(n);
            testes.push_back(n);
            respostaTestes.push_back(resposta);
        }
        else {
            break;
        }
    }
    for (int i = 0; i < testes.size(); i++) {
        cout << "f91(" << testes[i] << ") = " << respostaTestes[i] << endl;
    }
    return 0;
}