#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int a[51][51];

int main() {
	int n, i, j, nx, ny, k, cnt = 0, flag;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			flag = 1;
			for (k = 0; k < 4; k++) {
				nx = i + dx[k];
				ny = j + dy[k];
				if (nx < 0 && nx > (n - 1) && ny < 0 && ny > (n - 1)) 
					continue;
				if (a[nx][ny] >= a[i][j]) {
					flag = 0;
					break;
				}
			}
			if (flag) {
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}

/*
* 
*/
