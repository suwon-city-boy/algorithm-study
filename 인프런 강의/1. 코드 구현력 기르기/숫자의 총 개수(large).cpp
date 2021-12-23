#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n, res = 0, sum = 0, cnt = 1, digit = 9;
	scanf("%d", &n);
	while (sum + digit < n) {
		sum = sum + digit;
		res = res + (digit * cnt);
		cnt++;
		digit *= 10;
	}
	res = res + (n - sum) * cnt;
	printf("%d", res);
	return 0;
}