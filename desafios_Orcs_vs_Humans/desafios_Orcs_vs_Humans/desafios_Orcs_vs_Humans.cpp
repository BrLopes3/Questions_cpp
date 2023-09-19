
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector< vector<char> > battle(10, vector<char>(10));

   //receive the matrix that represents the battle
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> battle[i][j];
		}
	}

	//define who will win the battle
	
	bool wizardOrc = false;
	bool wizardHuman = false;

	//define if any side has a wizard
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			if (battle[i][j] == 'm') {
				wizardOrc = true;
				
			}
		}
		for (int j = 9; j > 4; j--) {
			if (battle[i][j] == 'm') {
				wizardHuman = true;
				
			}
		}
	}

	//counting the power of both sides
	int numberOrcs = 0;
	int numberHumans = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			if (wizardOrc) {
				if (battle[i][j] == 'o' || battle[i][j] == 'm') {
					
					numberOrcs++;

					//define how many orcs we have surounding the orc
					if (i>0 && (battle[i - 1][j]=='o' || battle[i-1][j] == 'm')) {
						numberOrcs++;
					}
					if (i<9 && (battle[i + 1][j] == 'o' || battle[i+1][j] == 'm')) {
						numberOrcs++;
					}
					if (j>0 && (battle[i][j-1] == 'o' || battle[i][j-1] == 'm')) {
						numberOrcs++;
					}
					if (j<9 && (battle[i][j+1] == 'o' || battle[i][j+1] == 'm')) {
						numberOrcs++;
					}
				}
			}
			else {
				if (battle[i][j] == 'o') {
					
					numberOrcs++;
				}
			}
		}

		for (int j = 9; j > 4; j--) {
			if (wizardHuman) {
				
				if (battle[i][j] == 'h' || battle[i][j] == 'm') {
					numberHumans++;
					//define how many humans we have surounding the human
					if (i > 0 && (battle[i - 1][j] == 'h' || battle[i - 1][j] == 'm')) {
						numberHumans++;
					}
					if (i < 9 && (battle[i + 1][j] == 'h' || battle[i + 1][j] == 'm')) {
						numberHumans++;
					}
					if (j > 5 && (battle[i][j - 1] == 'h' || battle[i][j - 1] == 'm')) {
						numberHumans++;
					}
					if (j < 9 && (battle[i][j + 1] == 'h' || battle[i][j + 1] == 'm')) {
						numberHumans++;
					}
				}
				
			}
			else {
				if (battle[i][j] == 'h') {

					numberHumans++;
				}
			}
		}
	}

	string result;

	if (numberOrcs > numberHumans) {
		result = "Loktar Ogar!!!";
	}
	else if(numberOrcs < numberHumans){
		result = "Pela Alianca!";
	}
	else {
		result = "Batalha lendaria!";
	}
	
	cout << result << endl;

}

