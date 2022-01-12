#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;  
int stack[100], top = -1;

void push(int x) {
	stack[++top] = x;
}

int pop() {
	return stack[top--];
}

int main() {
	int n, k;
	// 16진수 출력을 위한 char 배열. 나중에 또 쓸 수 있을듯!
	char str[20] = "0123456789ABCDEF"; 
	scanf("%d %d", &n, &k);
	while (n > 0) {
		push(n % k);
		n /= k;
	}
	while (top != -1) { //스택이 비어있을 때까지
		printf("%c", str[pop()]);
	}
	return 0;
}

/*
 * 스택 자료구조 직접 구현하여 풀이해보기
 */
