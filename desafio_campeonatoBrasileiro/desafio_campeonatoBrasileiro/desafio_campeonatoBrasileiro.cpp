
#include <iostream>
using namespace std;

int main()
{
    int Cv, Ce, Cs, Fv, Fe, Fs;

    cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs;

    if (Cv, Ce, Fv, Fe >= 0 && Cv, Ce, Fv, Fe <= 100 && Cs, Fs >= -1000 && Cs, Fs <= 1000) {

        int Cpoint = (Cv * 3) + (Ce * 1);
        int Fpoint = (Fv * 3) + (Fe * 1);
        
        if (Cpoint > Fpoint) {
            cout << 'C' << endl;
        }
        else if (Fpoint > Cpoint) {
            cout << 'F' << endl;
        }
        else if (Fpoint == Cpoint) {
            if (Cs > Fs) {
                cout << 'C' << endl;
            }
            else if (Fs > Cs) {
                cout << 'F' << endl;
            }
            else if (Fs == Cs) {
                cout << '=' << endl;
            }
        }
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
