#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;  
int n, chk[11];

void dfs(int x) {
	//���� ����
	if (x == n + 1) {
		for (int i = 1; i <= x; i++) {
			if (chk[i] == 1) {
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	//�ݺ�
	else {
		chk[x] = 1;
		dfs(x + 1);
		chk[x] = 0;
		dfs(x + 1);
	}
}

int main() {
	scanf("%d", &n);
	dfs(1);
	return 0;
}

/*
 * 
 */
