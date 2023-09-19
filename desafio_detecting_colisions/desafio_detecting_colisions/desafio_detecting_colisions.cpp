
#include <iostream>;
#include <cassert>;
using namespace std;

int main()
{
    int x0, y0, x1, y1;
    cin >> x0 >> y0 >> x1 >> y1;

    int x2, y2, x3, y3;
    cin >> x2 >> y2 >> x3 >> y3;

    assert(x0 >= 0 && x0 <= x1 && x1 <= 1000000);
    assert(y0 >= 0 && y0 <= y1 && y1 <= 1000000);
    assert(x2 >= 0 && x2 <= x3 && x3 <= 1000000);
    assert(y2 >= 0 && y2 <= y3 && y3 <= 1000000);

   
        int result = 0;

        for (int i = x0; i <= x1; i++ ) {
            if (i >= x2 && i <= x3) {
                for (int j = y0; j <= y1; j++) {
                    if (j >= y2 && j <= y3) {
                        result += 1;
                    }

                }

            }
            
        }
        if (result != 0) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }

  

}

