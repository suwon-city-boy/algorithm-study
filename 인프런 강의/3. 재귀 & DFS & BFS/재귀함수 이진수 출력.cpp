#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;  

void recur(int x) {
	if (x == 0) return; //종료 지점
	else {
		recur(x/2);
		printf("%d", x%2);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	recur(n);
	return 0;
}

/*
 * 재귀 함수는 종료 지점이 명시되어야 함
 */
