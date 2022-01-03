#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	int n, i, j, tmp, a[10001];
	scanf("%d", &n);
	vector<int> ch(n+1);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	ch[1] = 1;
	for (i = 2; i <= n; i++) {
		tmp = i;
		for (j = i-1; j >= 1; j--) {
			if(a[i] > a[j]) tmp--;
		}
		ch[i] = tmp;
	}
	for (i = 1; i <= n; i++) {
		printf("%d ", ch[i]);
	}
	return 0;
}