#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;  

void prefix(int x) { //전위
	if (x > 7) return;
	else {
		printf("%d ", x);
		prefix(x*2);
		prefix(x * 2+1);
	}
}

void infix(int x) { //중위
	if (x > 7) return;
	else {
		infix(x * 2);
		printf("%d ", x);
		infix(x * 2 + 1);
	}
}

void postfix(int x) { //후위
	if (x > 7) return;
	else {
		postfix(x * 2);
		postfix(x * 2 + 1);
		printf("%d ", x);
	}
}

int main() {
	int n;
	prefix(1); //전
	printf("\n");
	infix(1); //중
	printf("\n");
	postfix(1); //후
	return 0;
}

/*
 * VLR, LVR, LRV
 */
