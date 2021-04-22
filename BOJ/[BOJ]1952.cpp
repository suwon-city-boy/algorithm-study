//https://www.acmicpc.net/problem/1952
#include <iostream>
#include <vector>
using namespace std;
bool visit[100][100];
int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };

int main() {
	int m, n, nx, ny, answer = 0, d = 0, x = 0, y = 0;
	cin >> m >> n;

	while (1) {
		if (visit[x][y] == 1)
			break;
		else
			visit[x][y] = 1;

		nx = x + dx[d];
		ny = y + dy[d];

		if (visit[nx][ny] == 1 || nx < 0 || ny < 0 || nx >= m || ny >= n) {
			d = (d + 1) % 4;
			nx = x + dx[d];
			ny = y + dy[d];
			answer++;
		}

		x = nx;
		y = ny;
	}
	cout << answer - 1 << endl;
}