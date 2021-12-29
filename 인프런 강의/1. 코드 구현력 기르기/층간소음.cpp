#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n, m, tmp, cnt = 0, max = -2147000000;
	scanf("%d %d", &n, &m);
	while (n--) {
		scanf("%d", &tmp);
		if (tmp > m) cnt++;
		else cnt = 0;
		if (cnt > max) max = cnt;
	}
	printf("%d", max);
}