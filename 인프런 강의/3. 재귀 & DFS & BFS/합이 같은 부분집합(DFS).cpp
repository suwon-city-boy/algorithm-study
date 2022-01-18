#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;  
int n, a[11], total;
bool flag = false;

void dfs(int x, int sum) {
	//���� ����
	if (flag == true) return;
	if (x == n + 1) {
		if (sum == total - sum) {
			flag = true;
		}
	}
	//�ݺ�
	else {
		dfs(x + 1, sum + a[x]); //�տ� ����
		dfs(x + 1, sum); //�տ� �������� ����
	}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		total += a[i];
	}
	dfs(1, 0);
	if (flag) printf("YES");
	else printf("NO");
	return 0;
}

/*
 * �κ����� -> DFS ��� ���ư��� �� �ε����� ��������, ������
 * DFS �Ҷ� ����Լ��� �Ű������� ������ ���� ������ �� �ľ�
 */
