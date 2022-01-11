#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, k, pos = 0, cnt = 0, sum = 0;
	scanf("%d", &n);
	int a[2001];
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	scanf("%d", &k);
	if (sum <= k) {
		printf("-1");
		return 0;
	}
	while (1) {
		pos++;
		if (pos > n) pos = 1;
		if (a[pos] != 0) {
			a[pos]--;
			cnt++;
			if (cnt == k) break;
		}
	}
	while (1) {
		pos++;
		if (pos > n) pos = 1;
		if (a[pos] != 0) break;
	}
	printf("%d", pos);
	return 0;
}

/*
* 
*/
