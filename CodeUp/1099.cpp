#include <stdio.h>
using namespace std;

int main() {
	int a[10][10], x = 1, y = 1;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d ", &a[i][j]);
		}
	}

	while (1) {
		if (a[x][y] == 2) {
			a[x][y] = 9;
			break;
		}

		a[x][y] = 9;
		if (a[x][y + 1] != 1)
			y += 1;
		else {
			if (a[x + 1][y] == 1)
				break;
			else
				x += 1;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}