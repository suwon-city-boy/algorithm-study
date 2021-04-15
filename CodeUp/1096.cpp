#include <stdio.h>
using namespace std;

int main() {
	int n, x, y;
	int a[20][20] = {};
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		a[x - 1][y - 1] = 1;
	}
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}