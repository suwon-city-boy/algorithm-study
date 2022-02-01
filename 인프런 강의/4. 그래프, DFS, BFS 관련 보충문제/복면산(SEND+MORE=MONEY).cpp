#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int chk[10], res[10], map[10];

int send() {
	return res[0] * 1000 + res[1] * 100 + res[2] * 10 + res[3];
}

int more() {
	return res[4] * 1000 + res[5] * 100 + res[6] * 10 + res[1];
}

int money() {
	return res[4] * 10000 + res[5] * 1000 + res[2] * 100 + res[1] * 10 + res[7];
}

void dfs(int x){
	if(x == 8){
		if(send() + more() == money()) {
			if(res[0] == 0 || res[4] == 0) return;
			printf("  %d %d %d %d\n", res[0], res[1], res[2], res[3]); 
			printf("+ %d %d %d %d\n", res[4], res[5], res[6], res[1]);
			printf("---------\n");
			printf("%d %d %d %d %d\n", res[4], res[5], res[2], res[1], res[7]);
		}
	}
	else {
		for(int i = 0; i <= 9; i++){ //ÀÎµ¦½º 
			if(chk[i] == 0){
				res[x] = i;
				chk[i] = 1;
				dfs(x+1);
				chk[i] = 0;
			}
		}
	}
}

int main() {
	dfs(0);
}
