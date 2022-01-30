#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;  
int dis[21], chk[21];
vector<int> map[21];

int main() {
	int n, m, from, to;
	queue<int> q;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &from, &to);
		map[from].push_back(to);
	}
	q.push(1);
	chk[1] = 1;
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int i = 0; i < map[now].size(); i++) {
			if (chk[map[now][i]] == 0) {
				chk[map[now][i]] = 1;
				dis[map[now][i]] = dis[now] + 1;
				q.push(map[now][i]);
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		printf("%d : %d\n", i, dis[i]);
	}
}