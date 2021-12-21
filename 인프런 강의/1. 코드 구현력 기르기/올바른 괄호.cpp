#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	char a[31];
	int b = 0;
	gets_s(a);
	for (int i = 0; a[i] != '\0'; i++) {
		if (b < 0) {
			break;
		}
		if (a[i] == '(') {
			b++;
		}
		else if (a[i] == ')') {
			b--;
		}
	}
	if (b == 0) printf("YES");
	else printf("NO");
	return 0;
}