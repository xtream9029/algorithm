/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Pair {
	int c;
	double a;
	double b;
};

bool cmp(Pair a, Pair b) {
	return a.c > b.c; //높이 순으로 정렬
}

int main() {
	int n;
	int sum = 0;//기둥의 총합
	cin >> n;

	vector<Pair> v;//각 다리마다 기둥을 놓을 위치를 저장

	for (int i = 0; i < n; i++) {
		int h;
		double x, y;
		cin >>h>> x >> y;

		Pair k;
		k.c = h;//다리의 높이
		k.a = (x + x + 1) / 2;
		k.b = (y + y - 1) / 2;
		v.push_back(k);
	}

	sort(v.begin(), v.end(),cmp);



	int len = v.size();

	for (int i = len - 1; i >= 0; i--) {
		if (i == len - 1) {//제일 높이가 낮은 다리의 기둥 길이 합
			sum += 2 * (v[i].c);
		}

		else {
			//x1쪽
			int kx = -1;//최초로 기둥을 놓을 위치가 겹치는 경우의 인덱스값을 받을 변수
			for (int j = i+1; j <= len - 1; j++) {
				if (v[i].a > v[j].a){//i=3인경우
					kx = j;
					break;
				}
			}
			if (kx != -1) {
				sum += v[i].c - v[kx].c;
			}
			else sum += v[i].c;

			//x2쪽
			int ky = -1;
			for (int j = i+1; j <= len - 1; j++) {
				if (v[i].b < v[j].b) {
					ky = j;
					break;
				}
			}
			if (kx != -1) {
				sum += v[i].c - v[kx].c;
			}
			else sum += v[i].c;
		}
	}

	cout << sum << endl;

	return 0;
}*/

