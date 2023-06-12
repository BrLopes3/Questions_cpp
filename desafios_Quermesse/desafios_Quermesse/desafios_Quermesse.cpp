#include <iostream>;
#include <vector>;
using namespace std;

int main()
{
    int n;
    int indice = 0; // indice do vetor dos testes realizados comecando no indice 0, 1, 2
    vector <int> result = {};
    while (cin >> n) {
        if (n != 0) {
            vector<int> numeros(n); //vetor com intiros a serem recebidos
            for (int i = 0; i < n; i++) {
                cin >> numeros[i];
                if (numeros[i] == i + 1) {
                    result.push_back(numeros[i]);
                }
            }
            
            indice++;
        }
        else {
            for (int i = 0; i < result.size(); i++) {

                cout << "Teste " << i+1 << endl;
                cout << result[i] << endl;
                cout << "" << endl;
            }
            
            break;
        }
       

    }
    
    

        

       
     
    
    
}
