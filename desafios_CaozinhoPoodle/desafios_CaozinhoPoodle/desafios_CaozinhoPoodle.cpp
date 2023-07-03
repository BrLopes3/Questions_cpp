// desafios_CaozinhoPoodle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>;
#include <vector>;
using namespace std;

int main() {
    int n, p;
    int pages;
    string name;
    vector <string> logo;
    string head = "Poo";
    string tail = "dle";
    while (cin >> n >> p) {
        if (n != 0 && p != 0) {
            if (n % p == 0) {
                pages = n / p;
            }
            else {
                pages = (n / p) + 1;
            }
            //build the word in the logo with the same number than the pages
            if (pages <= 6) {
                name = "Poodle";
            }
            else if (pages >6 && pages <=20){
                for (int i = 7; i <= pages; i++) {
                    head = head + "o";
                }
                name = head + tail;
            }
            else if (pages > 20) {
                pages = 20;
                for (int i = 7; i <= pages; i++) {
                    head = head + "o";
                }
                name = head + tail;
            }
            logo.push_back(name);
            head = "Poo";
        }
        else {
            break;
            
        }
        
    }
    for (int i = 0; i < logo.size(); i++) {
        cout << logo[i] << endl;
    }
    

    return 0;
}