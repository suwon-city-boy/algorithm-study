#include<iostream>
#include<stdio.h>
using namespace std;
int a[60], b[60];
int main() {
	char str[101];
	int i;
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			a[str[i] - 64]++;
		}
		else {
			a[str[i] - 70]++;
		}
	}
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			b[str[i] - 64]++;
		}
		else {
			b[str[i] - 70]++;
		}
	}

	for (i = 1; i <= 60; i++) {
		if (a[i] != b[i]) {
			printf("NO");
			exit(0);
		}
	}
	printf("YES");
}