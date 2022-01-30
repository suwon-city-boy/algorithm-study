#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;  
int n, m, map[21][21], ch[21], res = 2147000000;

void dfs(int x, int sum) {
	if (x == n) {
		if (sum < res) res = sum;
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (map[x][i] != 0 && ch[i] == 0) {
				ch[i] = 1;
				dfs(i, sum + map[x][i]);
				ch[i] = 0;
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
		map[from][to] = val;
	}
	ch[1] = 1;
	dfs(1, 0);
	printf("%d", res);
}