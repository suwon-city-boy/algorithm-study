#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n, cnt = 0;
	bool flag;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		flag = true;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag) cnt++;
	}
	printf("%d", cnt);
	return 0;
}