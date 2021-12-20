#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n, tmp, max = -1, min = 101;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &tmp);
		if (tmp > max) max = tmp;
		if (tmp < min) min = tmp;
	}
	printf("%d", max - min);
	return 0;
}