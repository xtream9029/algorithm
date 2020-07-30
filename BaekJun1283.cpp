/*#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<char> v;

bool binary_search(int first,int last,char data){//정렬된 데이터에서만 쓸수있음
	if (first >= last) return false;

	int mid = (first + last) / 2;

	if (v[mid] == data) return true;
	else if (data < v[mid]) return binary_search(first,mid-1,data);
	else if (data > v[mid]) return binary_search(mid+1, last, data);
}

int main() {
	int n;
	cin >> n;
	int idx;
	for (int i = 0; i < n; i++) {
		string s;
		getline(cin, s);//공백을 포함한 문자열 입력
		idx = -1;
		for (int j = 0; j < s.length(); j++) {
			if (v.empty()) {
				v.push_back(s[j]);
				idx = 0;
				break;
			}

			else {
				if (!binary_search(0, v.size()-1,s[j])){//기존에 등록돼있던 단축기 목록에 없어야함
					idx = j;
					v.push_back(s[j]);//새로운 단축키 등록 (s[j])
					break;
				}
			}

			if (v.size() >= 2){
				sort(v.begin(), v.end());
			}
		}

		if (idx == -1) {
			for (int j = 0; j < s.length(); j++) {
				cout << s[j];
			}
		}

		else {
			for (int j = 0; j < s.length(); j++) {
				if (idx == j) {
					cout << "[" << s[j] << "]";
				}
				else cout << s[j];
			}
		}
		cout << endl;
	}

	return 0;
}*/
