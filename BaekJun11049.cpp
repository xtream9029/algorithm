/*#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int LCS[1010][1010] = { 0, };

int main() {
	string a, b;
	cin >> a >> b;

	int a_len = a.length();
	int b_len = b.length();

	for (int i = 1; i <= a_len; i++) {
		for (int j = 1; j <= b_len; j++) {
			if (a[i - 1] == b[j - 1]) {
				LCS[i][j] = LCS[i - 1][j - 1] + 1;
			}
			else {
				LCS[i][j] = max(LCS[i][j - 1], LCS[i - 1][j]);
			}
		}
	}

	cout << LCS[a_len][b_len] << endl;

	return 0;
}*/
