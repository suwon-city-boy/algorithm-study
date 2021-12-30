#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int a[11], b[11], A = 0, B = 0, D = 2;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++) {
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i]) {
			A += 3;
			D = 0;
		} else if (a[i] < b[i]) {
			B += 3;
			D = 1;
		}
		else {
			A += 1;
			B += 1;
		}
	}
	printf("%d %d\n", A, B);
	if (D == 0) printf("A");
	else if (D == 1) printf("B");
	else if (D == 2) printf("D");
	return 0;
}