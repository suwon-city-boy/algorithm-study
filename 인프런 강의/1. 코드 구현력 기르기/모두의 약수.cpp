#include<iostream>
#include<stdio.h>
using namespace std;
int a[50001];
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j = j+i) {
			a[j]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}