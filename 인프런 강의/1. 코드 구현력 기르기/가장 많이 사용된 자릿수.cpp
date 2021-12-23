#include<iostream>
#include<stdio.h>
using namespace std;
int num[10];
int main() {
	char a[101];
	int max = -2147000000, res;
	scanf("%s", &a);
	for (int i = 0; a[i] != '\0'; i++) {
		int digit = a[i] - '0';
		num[digit]++;
	}
	for (int i = 0; i <= 9; i++) {
		if (num[i] >= max) {
			max = num[i];
			res = i;
		}
	}
	printf("%d", res);
	return 0;
}