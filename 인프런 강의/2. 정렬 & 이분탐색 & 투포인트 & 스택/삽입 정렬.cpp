#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	int n, i, j, tmp, a[101];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 1; i < n; i++) {
		tmp = a[i];
		for (j = i-1; j >= 0; j--) {
			if (tmp < a[j]) {
				a[j + 1] = a[j];
			}
			else break;
		}
		a[j + 1] = tmp;
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}