#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;  
int cnt = 0, map[8][8], chk[8][8];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void dfs(int x, int y) {
	if (x == 7 && y == 7) {
		cnt++;
	}
	else {
		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (nx < 1 || nx > 7 || ny < 1 || ny > 7) continue;
			if (map[nx][ny] == 0 && chk[nx][ny] == 0) {
				chk[nx][ny] = 1;
				dfs(nx, ny);
				chk[nx][ny] = 0;
			}
		}
	}
}

int main() {
	for (int i = 1; i <= 7; i++) {
		for (int j = 1; j <= 7; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	chk[1][1] = 1;
	dfs(1, 1);
	printf("%d", cnt);
	return 0;
}

/*
 * '경로 탐색' 문제 응용
 * 경로 관련 완전 탐색 문제들에 응용할 수 있을 듯
 */