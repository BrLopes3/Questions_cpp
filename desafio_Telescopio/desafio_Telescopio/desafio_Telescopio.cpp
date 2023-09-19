
#include <iostream>
using namespace std;
int main()
{
   //area de abertura do telescopio
   int area;
   cin >> area;
   //numero de estrelas
   int estrelas;
   cin >> estrelas;
   int i = 1;
   int fotons;
   int estrelasVisiveis = 0;
   while (i <= estrelas) {
	   cin >> fotons;
	   if (fotons * area >= 40000000) {
		   estrelasVisiveis++;
	   }

	   i++;
   }
   cout << estrelasVisiveis << endl;
}

