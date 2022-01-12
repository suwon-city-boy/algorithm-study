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
			//dp테이블 -> (0,0)부터 (i,j)까지의 합을 담은 테이블
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + a[i][j];
		}
	}
	scanf("%d %d", &x, &y);
	for (i = x; i <= h; i++) {
		for (j = y; j <= w; j++) {
			//(i,j)로부터 x * y 크기의 영토의 합
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
 * 입력 값의 범위가 커짐에 따라 O(n²)의 시간 복잡도 안에서 해결해야함
 * 기존 내부에 존재하는 2중 for문을 줄여야 함 -> DP로 접근
 */
