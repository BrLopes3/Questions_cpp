
#include <iostream>
using namespace std;


int main()
{
    
        time_t now = time(0);
        tm* time = localtime(&now);
        cout << (time->tm_year + 1900) << '-' << (time->tm_mon + 1) << '-' << time->tm_mday << endl;
    

    int numero, capacidade;
    int saidas = 0, entradas = 0;
    int saida, entrada;
    int verificador;
    char result;

    cin >> numero >> capacidade;
    int indice=1;
    while (indice <= numero) {
        cin >> saida >> entrada;
        saidas = saidas + saida;
        entradas = entradas + entrada;
        verificador = entradas - saidas;
        if (verificador > capacidade) {
            result = 'S';
            break;
        }
        else {
            result = 'N';
        }
        indice++;
    }
    cout << result << endl;
}

