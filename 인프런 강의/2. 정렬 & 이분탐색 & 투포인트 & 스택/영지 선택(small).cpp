#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a[51][51];

int main() {
	int h, w, x, y, k, s, i, j, sum, max = -2147000000;
	//입력
	scanf("%d %d", &h, &w);
	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d %d", &x, &y);
	//처리
	for (i = 0; i < h - x + 1; i++) {
		for (j = 0; j < w - y + 1; j++) {
			sum = 0;
			for (k = i; k < i + x; k++) {
				for (s = j; s < j + y; s++) {
					sum += a[k][s];
				}
			}
			if (max < sum) {
				max = sum;
			}
		}
	}
	printf("%d", max);
	return 0;
}

/*
* 
*/
