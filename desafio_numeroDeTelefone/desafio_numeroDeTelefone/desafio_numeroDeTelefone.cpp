
#include <iostream>;
#include <vector>;
using namespace std;
int main()
{
    vector<char> phone;
    char input;
    while (cin.get(input) && input != '\n') {
        phone.push_back(input);
    }

    for (int i = 0; i < phone.size(); i++) {

        if (phone[i]=='A'|| phone[i] == 'B'|| phone[i] == 'C') {
            cout << 2;
        }
        else if (phone[i] == 'D' || phone[i] == 'E' || phone[i] == 'F') {
            cout << 3;
        }
        else if (phone[i] == 'G' || phone[i] == 'H' || phone[i] == 'I') {
            cout << 4;
        }
        else if (phone[i] == 'J' || phone[i] == 'K' || phone[i] == 'L') {
            cout << 5;
        }
        else if (phone[i] == 'M' || phone[i] == 'N' || phone[i] == 'O') {
            cout << 6;
        }
        else if (phone[i] == 'P' || phone[i] == 'Q' || phone[i] == 'R' || phone[i] =='S') {
            cout << 7;
        }
        else if (phone[i] == 'T' || phone[i] == 'U' || phone[i] == 'V') {
            cout << 8;
        }
        else if (phone[i] == 'W' || phone[i] == 'X' || phone[i] == 'Y' || phone[i] == 'Z') {
            cout << 9;
        }
        else {
            cout << phone[i];
        }
        
    }

    
}


