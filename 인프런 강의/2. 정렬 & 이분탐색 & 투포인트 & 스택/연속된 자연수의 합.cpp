#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, tmp, cnt = 0, t = 1, i;
	scanf("%d", &n);
	tmp = n;
	n--;
	while (n > 0) {
		t++;
		n -= t;
		if (n % t == 0) {
			for (i = 1; i < t; i++) {
				printf("%d + ", (n / t) + i);
			}
			printf("%d = %d\n", (n / t) + i, tmp);
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}