#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int a[25][25];
int group[25][25];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int ans[25 * 25];
int n;
void bfs(int i, int j, int cnt) {
	queue<pair<int, int>> q;
	q.push(make_pair(i, j));
	group[i][j] = cnt;
	while (!q.empty()) {
		i = q.front().first;
		j = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++) {
			int nx = i + dx[k];
			int ny = j + dy[k];
			if (0 <= nx && nx < n && 0 <= ny && ny < n) {
				if (a[nx][ny] == 1 && group[nx][ny] == 0) {
					q.push(make_pair(nx, ny));
					group[nx][ny] = cnt;
				}
			}
		}
	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &a[i][j]);
		}
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 1 && group[i][j] == 0)
				bfs(i, j, ++cnt);
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ans[group[i][j]] += 1;
		}
	}
	cout << cnt << "\n";
	sort(ans + 1, ans + cnt + 1);
	for (int i = 1; i <= cnt; i++) {
		printf("%d\n", ans[i]);
	}
}