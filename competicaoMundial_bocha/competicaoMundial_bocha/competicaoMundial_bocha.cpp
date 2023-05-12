// competicaoMundial_bocha.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string pontos;
    getline(cin, pontos);

    istringstream iss(pontos);
    int a, b, c;
    iss >> a >> b >> c;

    if (a, b, c >= 1 && a, b, c <= 100) {

        int points[3];
        points[0] = a;
        points[1] = b;
        points[2] = c;
        int t;
        for (int i = 0;i < 3;i++) {
            for (int j = i + 1; j < 3; j++) {
                
                if (points[i] < points[j]) {
                    t = points[j];
                    points[j] = points[i];
                    points[i] = t;
                }

            }

        }
       
        cout << points[1] << endl;
       
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
