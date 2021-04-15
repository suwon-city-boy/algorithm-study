#include <stdio.h>
using namespace std;

int main() {
	int w, h;
	int n, l, d, x, y;

	scanf("%d %d", &h, &w);
	scanf("%d", &n);

	int a[h+1][w+1] = {};
	for (int t = 0; t < n; t++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);
		
		if (d == 0) {
			for (int i = y; i <= y + l - 1; i++) {
				a[x][i] = 1;
			}
		}
		else {
			for (int i = x; i <= x + l - 1; i++) {
				a[i][y] = 1;
			}
		}
	}

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}