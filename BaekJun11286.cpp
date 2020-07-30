/*#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> op;

struct cmp {//비교함수 클래스,사용자 정의 우선순위
	bool operator()(int a, int b){
		if (abs(a) == abs(b)) return a > b;
		else return abs(a) > abs(b);
	}
};


int main() {
	int n;
	cin >> n;

	priority_queue<int, vector<int>, cmp> q;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		op.push_back(x);
	}

	for (int i = 0; i < op.size(); i++) {
		if (op[i] == 0) {
			if (q.empty()) {
				cout << 0 << endl;
			}
			else {
				cout << q.top() << endl;
				q.pop();
			}
		}

		else {
			q.push(op[i]);
		}
	}

	return 0;
}*/
