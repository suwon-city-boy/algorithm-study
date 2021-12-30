#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n, k, i;
	int sum = 0, max = -2147000000;
	int a[100001];
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < k; i++) {
		sum += a[i];
	}
	for (i = k; i < n; i++) {
		sum = sum - a[i - k] + a[i];
		if (max < sum) max = sum;
	}
	printf("%d", max);
	return 0;
}