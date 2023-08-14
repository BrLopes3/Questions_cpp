#include <iostream>;
#include <vector>;
using namespace std;

int Hanoi(int n, char origin, char destiny, char temp) {
    double moves;
    if (n == 1) {
        moves = 1;
    }
    else {
        moves = (pow(2,n)) - 1;

    }
    return moves;

}

    int main() {
        int n;
        vector<int> testResults;
        while (cin >> n) {

            if (n > 0 && n <= 30) {
                int totalMoves = Hanoi(n, 'A', 'B', 'C');
                testResults.push_back(totalMoves);
                totalMoves = 0;
            }
            else if (n == 0) {
                break;
            }
        }
        for (int i = 0; i < testResults.size(); i++) {
            cout << "Teste " << i + 1 << endl;
            cout << testResults[i] << endl;
            cout << endl;
        }

    }



