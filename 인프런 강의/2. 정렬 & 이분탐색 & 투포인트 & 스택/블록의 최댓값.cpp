#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a[10][10];

int main() {
	int n, i, j, cnt = 0, tmp;
	scanf("%d", &n);
	for (j = 0; j < n; j++) {
		scanf("%d", &tmp);
		for (i = 0; i < n; i++) {
			a[i][j] = tmp;
		}
	}
	for (i = n-1; i >= 0; i--) {
		scanf("%d", &tmp);
		for (j = 0; j < n; j++) {
			if(a[i][j] >= tmp)
				a[i][j] = tmp;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cnt += a[i][j];
		}
	}
	printf("%d", cnt);
	return 0;
}

/*
* 
*/
