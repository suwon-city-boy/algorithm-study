#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n, mn = 2147000000, mx = -2147000000;
int a[20], op[5], chk[20];

void dfs(int L, int sum){
	if(L == n) {
		if(sum > mx) mx = sum;
		if(sum < mn) mn = sum;
	}
	else {
		if(op[1] > 0) {
			op[1]--;
			dfs(L+1, sum + a[L]);
			op[1]++;
		}
		if(op[2] > 0) {
			op[2]--;
			dfs(L+1, sum - a[L]);
			op[2]++;
		}
		if(op[3] > 0) {
			op[3]--;
			dfs(L+1, sum * a[L]);
			op[3]++;
		}
		if(op[4] > 0) {
			op[4]--;
			dfs(L+1, sum / a[L]);
			op[4]++;
		}
	}
}

int main() {
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=1; i<=4; i++){
		scanf("%d", &op[i]);
	}
	dfs(1, a[0]);
	printf("%d\n", mx);
	printf("%d", mn);
}
