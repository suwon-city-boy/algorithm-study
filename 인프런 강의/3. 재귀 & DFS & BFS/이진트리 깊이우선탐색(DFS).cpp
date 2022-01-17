#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;  

void prefix(int x) { //����
	if (x > 7) return;
	else {
		printf("%d ", x);
		prefix(x*2);
		prefix(x * 2+1);
	}
}

void infix(int x) { //����
	if (x > 7) return;
	else {
		infix(x * 2);
		printf("%d ", x);
		infix(x * 2 + 1);
	}
}

void postfix(int x) { //����
	if (x > 7) return;
	else {
		postfix(x * 2);
		postfix(x * 2 + 1);
		printf("%d ", x);
	}
}

int main() {
	int n;
	prefix(1); //��
	printf("\n");
	infix(1); //��
	printf("\n");
	postfix(1); //��
	return 0;
}

/*
 * VLR, LVR, LRV
 */
