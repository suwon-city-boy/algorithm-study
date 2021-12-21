#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	char a[101], b[101];
	int p = 0;
	gets_s(a);
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] != ' ') {
			if (a[i] > 'A' && a[i] < 'Z') {
				b[p++] = a[i] + 32;
			}
			else b[p++] = a[i];
		}
	}
	b[p] = '\0';
	printf("%s", b);
	return 0;
}