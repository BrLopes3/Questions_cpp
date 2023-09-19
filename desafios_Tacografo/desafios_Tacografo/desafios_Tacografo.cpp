
#include <iostream>
using namespace std;

int main()
{
    int intervalos;
    int i = 1;
    int tempo, velocidade;
    int distancia;
    int distanciaTotal = 0;
    cin >> intervalos;
    
    while (i <= intervalos) {
        cin >> tempo >> velocidade;
        distancia = tempo * velocidade;
        distanciaTotal += distancia;

        i++;
    }
    cout << distanciaTotal << endl;
}

