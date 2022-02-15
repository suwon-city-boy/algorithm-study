#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n, m, a, b;
	cin >> n;
	vector<vector<int> > dis(n+1, vector<int>(n+1, 100));
	vector<int> res(n+1, 0);
	for (int i = 1; i <= n; i++) {
		dis[i][i] = 0;
	}
	while (true) {
		cin >> a >> b;
		if (a == -1 && b == -1) break;
		dis[a][b] = 1;
		dis[b][a] = 1;
	}
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
			}
		}
	}
	int score = 100;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			res[i] = max(res[i], dis[i][j]);
		}
		score = min(score, res[i]);
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (res[i] == score) cnt++;
	}
	cout << score << " " << cnt << endl;
	for (int i = 1; i <= n; i++) {
		if (res[i] == score) cout << i << " ";
	}
}