#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;  
vector<int> map[30];
int ch[30], cnt = 0, n, m;

void dfs(int x) {
	if (x == n) {
		cnt++;
	}
	else {
		for (int i = 0; i < map[x].size(); i++) {
			if (ch[map[x][i]] == 0) {
				ch[map[x][i]] = 1;
				dfs(map[x][i]);
				ch[map[x][i]] = 0;
			}
		}
		
	}
}

int main() {
	int from, to;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &from, &to);
		map[from].push_back(to);
	}
	ch[1] = 1;
	dfs(1);
	printf("%d", cnt);
}