#include <iostream>
using namespace std;

int main()
{
    int l, n, c;
    int coposDerrubados = 0;
    cin >> n;
    int i = 1;
    while (i <= n) {
        cin>>l>>c;
        if (l > c) {
			coposDerrubados += c;
		}
        i++;
    }
    cout<< coposDerrubados << endl;
    
}

