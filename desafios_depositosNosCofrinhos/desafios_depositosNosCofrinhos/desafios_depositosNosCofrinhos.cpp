
#include <iostream>;
#include <vector>;
using namespace std;

int main()
{
        int n, j, z;
        int jAcumulado = 0, zAcumulado = 0;
        vector<vector<int>> testes = {};
        vector<int> results = {};
        
        
        while (cin >> n) {
            if (n != 0) {              
                for (int i = 0; i < n; i++) {
                    cin >> j >> z;
                    jAcumulado = jAcumulado + j;
                    zAcumulado = zAcumulado + z;
                    results.push_back(jAcumulado - zAcumulado);                  
                }
                testes.push_back(results);
               
            }

            else {
                for (int i = 0; i < testes.size(); i++) {
                    cout << "Teste " << i+1 << endl;
                    for (int j = 0; j < testes[i].size(); j++) {
                        cout << testes[i][j] << endl;
                        cout << "" << endl;
                    }
                }
                    
            }

        }
        return 0;
}
