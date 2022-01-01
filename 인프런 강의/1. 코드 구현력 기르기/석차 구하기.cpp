#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	int n, i, j, pre, now, pos, a[101];
	scanf("%d", &n);
	vector<int> ch(n, 1);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (a[i] > a[j]) {
				ch[j]++;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", ch[i]);
	}
	return 0;
}