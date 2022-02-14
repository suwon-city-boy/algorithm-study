#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int dy[21][21];
int a[21][21];

int dfs(int x, int y) {
	if (dy[x][y] > 0) return dy[x][y];
	if (x == 1 && y == 1) return a[x][y];
	else if (x == 1) {
		return dy[x][y] = dfs(x, y - 1) + a[x][y];
	}
	else if (y == 1) {
		return dy[x][y] = dfs(x - 1, y) + a[x][y];
	}
	else {
		return dy[x][y] = min(dfs(x - 1, y), dfs(x, y - 1)) + a[x][y];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	cout << dfs(n, n);
}