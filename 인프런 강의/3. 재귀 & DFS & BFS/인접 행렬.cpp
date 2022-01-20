#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;  
int a[21][21];

int main() {
	int n, m, from, to, val;
	scanf("%d %d", &n, &m);
	while (m--) {
		scanf("%d %d %d", &from, &to, &val);
		a[from][to] = val;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*
 * 
 */
