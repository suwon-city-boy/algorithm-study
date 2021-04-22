[1913]
//https://www.acmicpc.net/problem/1913
#include <iostream>
#include <vector>
using namespace std;
int a[999][999];
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

int main() {
	int n, m, nx, ny, d = 0, x = 0, y = 0, answer_x, answer_y;
	cin >> n;
	cin >> m;


	for (int i = n * n; i > 0; i--) {
		a[x][y] = i;

		nx = x + dx[d];
		ny = y + dy[d];

		if (a[nx][ny] != 0 || nx >= n || ny >= n || nx < 0 || ny < 0) {
			d = (d + 1) % 4;
			nx = x + dx[d];
			ny = y + dy[d];
		}

		if (i == m) {
			answer_x = x + 1;
			answer_y = y + 1;
		}

		x = nx;
		y = ny;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

	cout << answer_x << " " << answer_y << endl;
}