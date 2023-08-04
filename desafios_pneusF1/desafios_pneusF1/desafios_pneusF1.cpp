#include <iostream>;
#include <math.h>;
using namespace std;

int main()
{
    char letter;
	double dM, dS, dH;
	double pitStop;
    cin >> letter;
	cin >> dS >> dM >> dH;
	switch (letter)
	{
		case 'S':{
			pitStop = floor(80 / dS);
			break;
		}
		case 'M': {
			pitStop = floor(80 / dM);
			break;
		}
		case 'H': {
			pitStop = floor(80 / dH);
			break;
		}
		
	}
	cout << pitStop << endl;
}

