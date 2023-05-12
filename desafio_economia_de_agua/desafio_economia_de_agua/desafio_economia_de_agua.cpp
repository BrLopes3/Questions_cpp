
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int value;
    if (n >= 0 && n <= 1000) {
        if (n >= 101) {

            value = (n - 100) * 5 + 140 + 20 + 7;
        }
        else if (n <= 100 && n >= 31) {
            value = (n - 30) * 2 + 20 + 7;

        }
        else if (n <= 30 && n >= 11) {

            value = (n - 10) * 1 + 7;
        }
        else if (n <= 10) {
            value = 7;
        }

        cout << value << endl;


    }
    
}

