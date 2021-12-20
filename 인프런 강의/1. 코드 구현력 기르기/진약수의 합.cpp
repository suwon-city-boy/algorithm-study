#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n, sum = 1;
	scanf("%d", &n);
	printf("1");
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			sum += i;
			printf(" + %d", i);
		}
	}
	printf(" = %d", sum);
	return 0;
}