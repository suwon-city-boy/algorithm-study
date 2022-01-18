#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;  
int n, a[11], total;
bool flag = false;

void dfs(int x, int sum) {
	//종료 조건
	if (flag == true) return;
	if (x == n + 1) {
		if (sum == total - sum) {
			flag = true;
		}
	}
	//반복
	else {
		dfs(x + 1, sum + a[x]); //합에 포함
		dfs(x + 1, sum); //합에 포함하지 않음
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
 * 부분집합 -> DFS 재귀 돌아가며 이 인덱스를 포함할지, 안할지
 * DFS 할때 재귀함수의 매개변수의 개수와 뭐가 들어갈지를 잘 파악
 */
