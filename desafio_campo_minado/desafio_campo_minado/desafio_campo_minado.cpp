//Desafio Campo Minado

#include <iostream>;
#include <vector>;
#include <cassert>;
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n >= 1 && n <= 50) {

        vector<int> numb(n); //vector that will receive the mines


        for (int i = 0; i < n; i++) {

            cin >> numb[i];
            assert(numb[i] == 0 || numb[i] == 1);
        }
        int k = 0;
        for (int i = 0; i < n; i++) {

            if (i == 0) {
                if (numb[i] == 1) { k += 1; }
                if (numb[i + 1] == 1) { k += 1; }
                cout << k << endl;
            }
            else if (i > 0 && i<n-1) {

                if (numb[i] == 1) { k += 1; }
                if (numb[i - 1] == 1) { k += 1; }
                if (numb[i + 1] == 1) { k += 1; }
                cout << k << endl;
            }
            else if (i == n-1) {
                if (numb[i] == 1) { k += 1; }
                if (numb[i - 1] == 1) { k += 1; }
                cout << k << endl;
            }
            k = 0; //reset the value of k for the next iteration
        }


    }

    return 0;
}

