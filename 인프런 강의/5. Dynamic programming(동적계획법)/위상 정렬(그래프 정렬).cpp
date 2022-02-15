#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n, m, a, b;
	cin >> n >> m;
	vector<vector<int> > map(n+1, vector<int>(n+1, 0));
	vector<int> degree(n + 1, 0); //진입 차수 기록
	queue<int> q;
	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		map[a][b] = 1;
		degree[b]++;
	}
	for (int i = 1; i <= n; i++) {
		//진입 차수가 0이 되면 다음 노드로 넘어갈 수 있음
		if (degree[i] == 0) q.push(i);
	}
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		cout << now << " ";
		for (int i = 1; i <= n; i++) {
			if (map[now][i] == 1) {
				degree[i]--;
				if (degree[i] == 0) q.push(i);
			}
		}
	}
}