#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n, m, sum = 0;
	scanf("%d %d", &n, &m);
	sum += n;
	printf("%d", n);
	for (int i = n+1; i <= m; i++) {
		sum += i;
		printf(" +%d", i);
	}
	printf(" = %d", sum);
	return 0;
}