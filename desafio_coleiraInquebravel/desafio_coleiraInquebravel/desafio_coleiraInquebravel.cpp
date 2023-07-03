
#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
    //receber numero de movimentos e distancia maxima
    int n, m;
    cin >> n >> m;
    char direction; //diracao do movimento;
    double distance;
    /*movimento dependendo da direcao :
    * N = y+d
    * S = y-d
    * L = x+d
    * O = x+d
    * posicao inicial da pessoa x=0, y=0 (0,0)
     */
    //posicao inicial 
    double x = 0;
    double y = 0;
    double dtotal = 0.0;
    int fugiu = 0;
    int i = 0;
    while (i < n) {
        cin >> direction >> distance;
        switch (direction) {
            case 'N': {
                y = y + distance;
                dtotal = hypot(x,y);
                break;
            }
            case 'S': {
                y = y - distance;
                dtotal = hypot(x, y);
                break;
            }
            case 'L': {
                x = x + distance;
                dtotal = hypot(x, y);
                break;
            }
            case 'O': {
                x = x - distance;
                dtotal = hypot(x, y);
                break;
            }
        }
        if (dtotal > m) {
            fugiu++;
        }
        i++;
    }
    if (fugiu > 0) {
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    }

}


