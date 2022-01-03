#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	int n, i, j, tmp;
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
	if (ch[2] >= ch[5]) printf("%d", ch[5]);
	else printf("%d", ch[2]);
	return 0;
}