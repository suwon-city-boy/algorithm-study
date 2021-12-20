#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n, m, sum = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		if (n % m == 0) {
			sum += m;
		}
	}
	printf("%d", sum);
	return 0;
}