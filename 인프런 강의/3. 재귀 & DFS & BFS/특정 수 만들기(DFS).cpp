#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;  
int n, a[11], m;
int cnt = 0;

void dfs(int x, int sum) {
	//���� ����
	if (x == n + 1) {
		if (sum == m) {
			cnt++;
		}
	}
	//�ݺ�
	else {
		dfs(x + 1, sum + a[x]); //+
		dfs(x + 1, sum - a[x]); //-
		dfs(x + 1, sum);
	}
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	dfs(1, 0);
	if (cnt) printf("%d", cnt);
	else printf("-1");
	return 0;
}

/*
 * �κ����� -> DFS ��� ���ư��� �� �ε����� ��������, ������
 * DFS �Ҷ� ����Լ��� �Ű������� ������ ���� ������ �� �ľ�
 */
