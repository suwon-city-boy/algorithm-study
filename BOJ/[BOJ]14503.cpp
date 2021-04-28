//https://www.acmicpc.net/problem/14503
#include <iostream>
using namespace std;
int a[51][51];
int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, 1, 0, -1 };
// 雀傈: 0 > 3 > 2 > 1 --> (d+3) % 4

int main() {
	int n, m, x, y, d, answer = 0;
	cin >> n >> m;
	cin >> x >> y >> d;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	while (1) {
		//1 : 寒, 2: 没家茄 备开
		if (a[x][y] == 0) {
			a[x][y] = 2;
			answer++;
		}
		if ((a[x + 1][y] != 0) && (a[x - 1][y] != 0) && (a[x][y + 1] != 0) && (a[x][y - 1] != 0)) {
			if (a[x - dx[d]][y - dy[d]] == 1) {
				break;
			}
			else {
				x -= dx[d];
				y -= dy[d];
			}

		}
		else {
			d = (d + 3) % 4;
			if (a[x + dx[d]][y + dy[d]] == 0) {
				x += dx[d];
				y += dy[d];
			}
		}
	}
	cout << answer;
}