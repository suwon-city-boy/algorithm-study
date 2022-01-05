#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	int n, i, j, tmp, a[101], idx;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		idx = i;
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[idx]) idx = j;
		}
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}