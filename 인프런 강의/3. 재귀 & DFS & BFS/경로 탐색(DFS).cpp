#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;  
int a[21][21], cnt = 0, chk[21], n, m;

void dfs(int x) {
	if (x == n) {
		cnt++;
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (a[x][i] == 1 && chk[i] == 0) {
				chk[i] = 1;
				dfs(i);
				chk[i] = 0;
			}
		}
	}
}

int main() {
	int from, to, val;
	scanf("%d %d", &n, &m);
	while (m--) {
		scanf("%d %d", &from, &to);
		a[from][to] = 1;
	}
	chk[1] = 1;
	dfs(1);
	printf("%d", cnt);
	return 0;
}

/*
 * 
 */
