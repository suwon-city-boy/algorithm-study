#include<iostream>
#include<stdio.h>
using namespace std;

int reverse(int x) {
	int res = 0;
	while (x > 0) {
		res = res * 10 + x % 10;
		x /= 10;
	}
	return res;
}

bool isPrime(int x) {
	if (x == 1) return false;
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n, tmp, reverseTmp;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &tmp);
		reverseTmp = reverse(tmp);
		if (isPrime(reverseTmp)) {
			printf("%d ", reverseTmp);
		}
	}
	return 0;
}