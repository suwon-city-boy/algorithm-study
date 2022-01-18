#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;  
int n, a[11], m;
int cnt = 0;

void dfs(int x, int sum) {
	//종료 조건
	if (x == n + 1) {
		if (sum == m) {
			cnt++;
		}
	}
	//반복
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
 * 부분집합 -> DFS 재귀 돌아가며 이 인덱스를 포함할지, 안할지
 * DFS 할때 재귀함수의 매개변수의 개수와 뭐가 들어갈지를 잘 파악
 */
