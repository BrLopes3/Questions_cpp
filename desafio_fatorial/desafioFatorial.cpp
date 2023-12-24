/*
Dado um inteiro N, determine quanto vale N fatorial (escreve-se N!). O fatorial de um número é o produto de todos os números entre 1 e N, inclusive. Por exemplo, 5! = 5 × 4 × 3 × 2 × 1 = 120.
*/
#include <iostream>
using namespace std;

int factorial(int n){
    if (n ==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    cout << "type a number: ";
    cin >> n;

    int fact = factorial(n);

    cout << "factorial of " << n << " is " << fact << endl;
    
    return 0;
}





