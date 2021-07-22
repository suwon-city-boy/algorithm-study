#include<stdio.h>
#include<algorithm>
int a[101], b[101];
int main() {
	char str[100];
	scanf("%s", &str);
	for (int i = 0; str[i] != '\0'; i++) {
		if ('A' <= str[i] && str[i] <= 'Z') {
			a[str[i] - 64]++;
		}
		else {
			a[str[i] - 70]++;
		}
	}

	scanf("%s", &str);
	for (int i = 0; str[i] != '\0'; i++) {
		if ('A' <= str[i] && str[i] <= 'Z') {
			b[str[i] - 64]++;
		}
		else {
			b[str[i] - 70]++;
		}
	}

	for (int i = 1; i <= 52; i++) {
		if (a[i] != b[i]) {
			printf("NO");
			exit(0);
		}
	}
	printf("YES");
}