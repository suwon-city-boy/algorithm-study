#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n, tmp, tmp2, i, a[100001], cnt = 1, max = -2147000000;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n-1; i++) {
		tmp = a[i];
		tmp2 = a[i + 1];
		if (tmp <= tmp2) {
			cnt++;
			if (max < cnt) {
				max = cnt;
			}
		}
		else cnt = 1;
	}
	printf("%d", max);
	return 0;
}