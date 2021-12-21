#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	char a[50];
	int num = 0, cnt = 0;
	scanf("%s", &a);
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] >= '0' && a[i] <= '9') {
			num = num * 10 + (a[i] - '0');
		}
	}
	printf("%d\n", num);
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}