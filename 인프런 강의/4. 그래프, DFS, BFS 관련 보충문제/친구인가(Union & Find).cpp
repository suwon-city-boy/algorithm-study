#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int unf[1001];

int Find(int x) {
	//집합의 최상위 루트를 찾아가는 과정
	if (x == unf[x]) return x;
	else return unf[x] = Find(unf[x]);
}

void Union(int x, int y) {
	int a, b;
	a = Find(x);
	b = Find(y);
	if (a != b) {
		//두 수가 같은 집합이 아니면 같은 집합으로 만들어줌
		unf[a] = b;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	int n, m, a, b;
	cin >> n >> m;
	//각자 개인 집합을 가진 채로 시작
	for (int i = 1; i <= n; i++) {
		unf[i] = i;
	}
	//입력된 두 수를 엮는 작업
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		Union(a, b);
	}
	cin >> a >> b;
	//각각의 집합이 같은 집합인지 확인
	a = Find(a);
	b = Find(b);
	if (a != b) cout << "NO";
	else cout << "YES";
}