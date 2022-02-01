#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n, res = -2147000000;
int T[20], P[20];

void dfs(int x, int sum){
	if(x == n+1) {
		if(sum > res) res = sum;
	}
	else {
		if(x + T[x] <= n+1) {
			dfs(x + T[x], sum + P[x]);			
		}
		dfs(x+1, sum);
	}
}

int main() {
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d %d", &T[i], &P[i]);
	}
	dfs(1, 0);
	printf("%d", res);
}
