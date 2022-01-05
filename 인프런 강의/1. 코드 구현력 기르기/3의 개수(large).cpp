#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	int n, lt = 999, cur, rt, k = 1, cnt = 0;
	scanf("%d", &n);
	while (lt != 0) {
		lt = n / (k*10);
		cur = (n / k) % 10;
		rt = n % k;

		if (cur > 3) {
			cnt += ((lt + 1) * k);
		} else if (cur < 3) {
			cnt += (lt * k);
		} else {
			cnt += (lt * k + (rt + 1));
		}

		k *= 10;
	}
	printf("%d", cnt);
	return 0;
}