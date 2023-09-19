#include <iostream>
using namespace std;


int main()
{
    int cards[5];
    for (int i = 0; i < 5; i++) {
        cin >> cards[i];

    }
    int c = 0;
    int d = 0;

    for (int i = 0; i < 4; i++) {
        if (cards[i + 1] > cards[i]) {
            c += 1;
        }
        else if (cards[i + 1] < cards[i]) {
            d -= 1;
        }

    }
    if (c == 4) {
        cout << 'C' << endl;
    }
    if (d == -4) {
        cout << 'D' << endl;
    }

    if (c != 4 && d != -4) {
        cout << 'N' << endl;
    }


}

