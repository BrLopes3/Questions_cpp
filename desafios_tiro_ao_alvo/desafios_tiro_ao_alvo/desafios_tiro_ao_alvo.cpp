#include <iostream>;
#include <vector>;
#include <cmath>;
using namespace std;

double radioDefinition(double x, double y) {
	return hypot(x,y);
}

int main()
{
	int c, t; //c = numero de circulos, t = numero de tiros
	cin >> c >> t; 

	vector<int> circles(c); //vetor de circulos
	for (int i = 0; i < c; i++) {
		cin >> circles[i];
	}

	//imprimir os raios dos circulos
	/*for (int i = 0; i < c; i++) {
		cout << circles[i] << " ";
	}
	cout << endl;*/


	vector<double> radios(t); //vetor com os raios dos tiros


	for (int i = 0; i < t; i++) {
		int x, y;
		cin >> x >> y;

		radios[i] = radioDefinition(x, y);
			
	}

	int point = 0;

	for (int i = 0; i < t; i++) {

		for (int j = c - 1; j >= 0; j--) {

			if (radios[i] <= circles[j]) {
				point++;
			}
		}

	}
	cout << point << endl;

}

