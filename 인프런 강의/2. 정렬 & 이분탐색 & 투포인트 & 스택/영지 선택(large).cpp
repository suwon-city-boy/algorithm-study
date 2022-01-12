#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a[701][701], dp[701][701];

int main() {
	int h, w, x, y, i, j, sum, max = -2147000000;
	scanf("%d %d", &h, &w);
	for (i = 1; i <= h; i++) {
		for (j = 1; j <= w; j++) {
			scanf("%d", &a[i][j]);
			//dp���̺� -> (0,0)���� (i,j)������ ���� ���� ���̺�
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + a[i][j];
		}
	}
	scanf("%d %d", &x, &y);
	for (i = x; i <= h; i++) {
		for (j = y; j <= w; j++) {
			//(i,j)�κ��� x * y ũ���� ������ ��
			sum = dp[i][j] - dp[i - x][j] - dp[i][j - y] + dp[i - x][j - y];
			if (max < sum) {
				max = sum;
			}
		}
	}
	printf("%d", max);
	return 0;
}

/*
 * �Է� ���� ������ Ŀ���� ���� O(n��)�� �ð� ���⵵ �ȿ��� �ذ��ؾ���
 * ���� ���ο� �����ϴ� 2�� for���� �ٿ��� �� -> DP�� ����
 */
