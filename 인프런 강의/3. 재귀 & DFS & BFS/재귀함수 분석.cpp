#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;  

void recur(int x) {
	if (x == 0) return; //종료 지점
	else {
		recur(x-1);
		printf("%d ", x);
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
 * 실행 순서 : recur(3) -> recur(2) -> recur(1) -> recur(0)
 * 출력 순서 : 0(출력x) -> 1 -> 2 -> 3
 */
