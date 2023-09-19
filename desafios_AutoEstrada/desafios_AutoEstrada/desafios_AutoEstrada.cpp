
#include <iostream>;
#include <vector>;
using namespace std;

int main()
{
    int c;

    cin >> c;

    vector<char> letras(c);

    for (int i = 0; i < c; i++) {
        cin >> letras[i];
    }

    int p = 0; //unidades de painel necessarios 

    for (int i = 0; i < c; i++) {

        if (letras[i] == 'P') { p += 2; }
        if (letras[i] == 'C') { p += 2; }
        if (letras[i] == 'A') { p += 1; }
        if (letras[i] == 'D') { p += 0; }

    }

    cout << p << endl;

}

