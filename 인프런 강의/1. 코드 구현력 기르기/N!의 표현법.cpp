#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	int n, i, j, tmp, a[10001];
	scanf("%d", &n);
	vector<int> ch(n+1);
	for (i = 2; i <= n; i++) {
		tmp = i;
		j = 2;
		while (tmp != 1) {
			if (tmp % j == 0) {
				ch[j]++;
				tmp /= j;
			}
			else j++;
		}
	}
	printf("%d! = ", n);
	for (i = 2; i <= n; i++) {
		if (ch[i] == 0) continue;
		printf("%d ", ch[i]);
	}
	
	return 0;
}