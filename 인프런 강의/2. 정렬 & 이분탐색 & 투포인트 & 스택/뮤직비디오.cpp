#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int n, m, a[1001];

int check(int x) {
	int sum = 0, cnt = 1;
	for (int i = 0; i < n; i++) {
		if (sum + a[i] > x) {
			cnt++;
			sum = a[i];
		}
		else sum += a[i];
	}
	return cnt;
}

int main() {
	int i, lt = 0, mid, rt = 0, res, max = -2147000000;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		rt += a[i];
		if (a[i] > max) max = a[i];
	}
	while (lt <= rt) {
		mid = (lt + rt) / 2;
		if (mid >= max && check(mid) <= m) {
			res = mid;
			rt = mid - 1;
		}
		else {
			lt = mid + 1;
		}
	}
	printf("%d", res);
	return 0;
}