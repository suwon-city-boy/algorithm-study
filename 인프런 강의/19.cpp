#include<stdio.h>
#include<algorithm>
int main() {
	int n, i, max, cnt = 0;
	int a[101];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	max = a[n - 1];
	for (i = n - 2; i >= 0; i--) {
		if (a[i] > max) {
			max = a[i];
			cnt++;
		}
	}
	printf("%d", cnt);
}