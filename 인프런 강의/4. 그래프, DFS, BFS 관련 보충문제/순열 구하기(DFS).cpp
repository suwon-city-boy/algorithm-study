#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int chk[20], res[20], map[20], n, r, cnt;

void dfs(int x){
	if(x == r){
		for(int j = 0; j < x; j++){
			printf("%d ", res[j]);
		}
		cnt++;
		printf("\n");
	}
	else {
		for(int i = 1; i <= n; i++){ //ÀÎµ¦½º 
			if(chk[i] == 0){
				res[x] = map[i];
				chk[i] = 1;
				dfs(x+1);
				chk[i] = 0;
			}
		}
	}
}

int main() {
	scanf("%d %d", &n, &r);
	for(int i = 1; i <= n; i++){
		scanf("%d", &map[i]);
	}
	dfs(0);
	printf("%d", cnt);
}
