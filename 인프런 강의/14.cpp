#include<stdio.h>
using namespace std;

int reverse(int x) {
	int sum = 0, tmp;
	while (x > 0) {
		tmp = x % 10;
		sum = sum * 10 + tmp;
		x /= 10;
	}
	return sum;
}

bool isPrime(int x) {
	if (x == 1) return false;
	for (int i = 2; i < x; i++) {
		if (x % i == 0)
			return false;
	}
	return true;
}

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		int tmp;
		scanf("%d", &tmp);
		int res = reverse(tmp);
		if (isPrime(res)) {
			printf("%d ", res);
		}
	}
}