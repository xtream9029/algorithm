/*#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

int table[1001][1001] = { 0, };
vector<char> sol;

int main() {
	vector<char> x;
	vector<char> y;

	string inX;
	string inY;

	cin >> inX;
	cin >> inY;


	x.push_back('0');
	y.push_back('0');

	for (int i = 0; i < inX.length(); i++) {
		x.push_back(inX[i]);
	}

	for (int i = 0; i < inY.length(); i++) {
		y.push_back(inY[i]);
	}



	for (int i = 1; i < x.size(); i++) {
		for (int j = 1; j < y.size(); j++) {
			if (x[i] == y[j]) {
				table[i][j] = table[i - 1][j - 1] + 1;
			}
			else {
				table[i][j] = max(table[i - 1][j], table[i][j - 1]);
			}
		}
	}


	int i = x.size()-1;
	int j = y.size()-1;

	if (table[i][j] != 0) {
		while (i >= 1 && j >= 1) {
			if (x[i] == y[j]) {
				sol.push_back(x[i]);
				i = i - 1;
				j = j - 1;
			}

			else {
				if (table[i - 1][j] > table[i][j - 1]) {
					i = i - 1;
				}

				else if (table[i - 1][j] < table[i][j - 1]) {
					j = j - 1;
				}

				else if (table[i - 1][j] == table[i][j - 1]) {
					j = j - 1;
				}
			}
		}

		cout << table[x.size() - 1][y.size() - 1] << endl;
		for (int k = sol.size()-1; k >=0; k--) {
			cout << sol[k];
		}
	}

	else if(table[i][j]==0){
		cout << 0 << endl;
	}


	return 0;
}
