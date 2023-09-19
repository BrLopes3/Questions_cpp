
#include <iostream>;
#include <string>;
using namespace std;

int main()
{
    int n;
    string frase;
    cin >> n;
    cin.ignore(); // Add this line to ignore the newline character
    getline(cin, frase);
    for (int i = n; i >= 1; i--) {
        cout << i << ". " << frase << endl;
    }
   
}
