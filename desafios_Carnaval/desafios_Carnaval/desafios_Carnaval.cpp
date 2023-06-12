
#include <iostream>;
#include <iomanip>;
    using namespace std;

    int main() {

        float notas[5];

        for (int i = 0; i < 5; i++) {

            cin >> notas[i];
        }

        float t;
        for (int i = 0; i < 5; i++) {
            for (int j = i + 1; j < 5; j++) {
                if (notas[i] >= notas[j]) {
                    t = notas[i];
                    notas[i] = notas[j];
                    notas[j] = t;
                }
            }
        }

        float media;
        media = notas[1] + notas[2] + notas[3];

        cout << fixed << setprecision(1) << media << endl;




        return 0;
    }

