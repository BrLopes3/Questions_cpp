#include <iostream>

using namespace std;


int main()
{
    int l, n;
    cin >> l >> n;


    int max_area1 = (n - 1); //soma de n-1 tapetes com area 1*1
    int max_area2 = (l - max_area1)*(l - max_area1); //area do tapete com comprimento restante
    int max_area = max_area1 + max_area2;

    cout << max_area << endl;



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
