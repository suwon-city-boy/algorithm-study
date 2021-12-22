#include<iostream>
#include<stdio.h>
using namespace std;
int a[10001];
int main() {
	int n, tmp, cnt = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		tmp = i;
		while (tmp > 0) {
			tmp /= 10;
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}