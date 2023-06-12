
#include <iostream>;
#include <cassert>;
#include <iomanip>;
using namespace std;

int main()
{
    float a, g, Ra, Rg;
    
    cin >> a >> g >> Ra >> Rg;

    assert(a >= 0.01 && a <= 10.00);
    assert(a >= 0.01 && g <= 10.00);
    assert(Ra >= 0.01 && Ra <= 20.00);
    assert(Rg >= 0.01 && Rg <= 20.00);

    float precoKm_a = (1/Ra) * a;
    float precoKm_g = (1/Rg) * g;
    char saida;


   if (round(precoKm_a) < round(precoKm_g)) {
        saida = 'A';
    }
    else if (round(precoKm_a) >= round(precoKm_g)) {
        saida = 'G';
    }
    cout << saida << endl;
    
}

