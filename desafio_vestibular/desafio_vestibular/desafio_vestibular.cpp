// desafio_vestibular.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>;
#include <vector>;
#include <cassert>;
using namespace std;

int main()
{
	int n;
	cin >> n;
	assert(n >= 1 && n <= 80);

	vector<char> grades(n);

	for (int i = 0; i < n; i++) {

		cin >> grades[i];
	}

	vector<char> ans(n);
	int points = 0;
	for (int i = 0; i < n; i++) {

		cin >> ans[i];
		if (ans[i] == grades[i]) { points += 1; }

	}
	cout << points << endl;

}

