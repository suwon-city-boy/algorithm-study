#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n, h[101], max, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &h[i]);
	}
	max = h[n-1];
	for (int i = n - 2; i >= 0; i--) {
		if (h[i] > max) {
			max = h[i];
			cnt++;
		}
	}
	printf("%d", cnt);
}