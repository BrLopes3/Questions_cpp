
#include <iostream>;
#include <string>;
#include <vector>;
using namespace std;

int digitSumRecursive(vector<int> digits, int index) {
    if (index < 0) {
        return 0; // Caso base: todos os dígitos foram somados.
    }
    else {
        int digit = digits[index] - '0';
        return digit + digitSumRecursive(digits, index - 1); // Soma do dígito atual com a soma dos dígitos restantes.
    }
}

int main()
{
    string number;
    vector <int> digits;
    cin >> number;
    for (char c : number) {
        int digit = c - '0';
        digits.push_back(digit);
    }

    
    cout << digitSumRecursive(digits, digits.size()-1) << endl;
    /*
    for (char c : number) {
        int digit = c - '0';
        digits.push_back(digit);
    }
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        sum += digits[i];
        
    }

    cout << sum << endl;
    */
    

}



