#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;  

void recur(int x) {
	if (x == 0) return; //���� ����
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
 * ��� �Լ��� ���� ������ ��õǾ�� ��
 * ���� ���� : recur(3) -> recur(2) -> recur(1) -> recur(0)
 * ��� ���� : 0(���x) -> 1 -> 2 -> 3
 */
