#include <iostream>
#include <string>
#include <vector>
using namespace std;

//funcao com a soma dos digitos do string
int Soma9(string number) {
    int sum = 0;
    for (char c : number) {
        sum += c - '0';
    }
    return sum;
}

//calcula se a soma dos digitos sera multiplo de nove
int somaDigitos(int numero) {
    int digitosSomados;
    if (numero < 10) {
        digitosSomados = numero;
    }
    else {
        digitosSomados = numero % 10 + somaDigitos(numero / 10);
    }
    return digitosSomados;
}
//calcula o 9-degree
int Grade9(int n) {
    int grau;
    if (n == 9) {
        return 1;
    }
    else if (n < 9) {
        return 0;
    }
    else{
        grau = Grade9(somaDigitos(n));
        if (grau == 0) {
            return 0;
        }
        else {
            return 1 + grau;
        }
    }
}


int main() {
    string n;
    int soma;
    int grau;
    vector<string> numeros;
    vector<int> grades;
    

    while (cin >> n) {
        if (n != "0") {
            numeros.push_back(n);
            soma = Soma9(n);
            grau = Grade9(soma);
            grades.push_back(grau);
        }
        else {
            break;
        }
    }
    for (int i = 0; i < grades.size(); i++) {

        if (grades[i] == 0) {
            cout << numeros[i] << " is not a multiple of 9." << endl;
        }
        else {
            cout << numeros[i] << " is a multiple of 9 and has a 9-degree " << grades[i] <<"."<<endl;
        }
    }

    return 0;
}



