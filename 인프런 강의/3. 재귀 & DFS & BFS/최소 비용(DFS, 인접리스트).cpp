#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;  
int n, m, ch[21], res = 2147000000;
vector<pair<int, int>> map[21];

void dfs(int x, int sum) {
	if (x == n) {
		if (sum < res) res = sum;
	}
	else {
		for (int i = 0; i < map[x].size(); i++) {
			if (ch[map[x][i].first] == 0) {
				ch[map[x][i].first] = 1;
				dfs(map[x][i].first, sum + map[x][i].second);
				ch[map[x][i].first] = 0;
			}
		}
	}
}

int main() {
	int from, to, val;
	scanf("%d %d", &n, &m);
	//가중치 인접행렬
	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &from, &to, &val);
		map[from].push_back(make_pair(to, val));
	}
	ch[1] = 1;
	dfs(1, 0);
	printf("%d", res);
}