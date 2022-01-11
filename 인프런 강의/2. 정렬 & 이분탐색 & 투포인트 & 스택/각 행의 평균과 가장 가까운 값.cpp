#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a[10][10];

int main() {
	int avg, min, sum, tmp, res = 0;
	for (int i = 0; i < 9; i++) {
		sum = 0;
		for (int j = 0; j < 9; j++) {
			scanf("%d", &a[i][j]);
			sum += a[i][j];
		}
		avg = (sum / 9.0) + 0.5; //¹Ý¿Ã¸²
		printf("%d", avg);
		min = 2147000000;
		for (int j = 0; j < 9; j++) {
			tmp = abs(a[i][j] - avg);
			if (tmp < min) {
				res = a[i][j];
				min = tmp;
			}
			else if (tmp == min) {
				if (a[i][j] > res) res = a[i][j];
			}
		}
		printf(" %d\n", res);
	}
	return 0;
}

/*
* 
*/
