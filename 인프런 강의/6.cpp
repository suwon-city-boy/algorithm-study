#include<stdio.h>
using namespace std;
int main() {
	//freopen("input.txt", "rt", stdin);
	char a[100];
	int i, sum = 0, cnt = 0;
	scanf("%s", &a);
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] >= '0' && a[i] <= '9') {
			sum = sum * 10 + (a[i] - '0');
		}
	}
	printf("%d\n", sum);
	for (i = 1; i <= sum; i++) {
		if (sum % i == 0) {
			cnt++;
		}
	}
	printf("%d", cnt);
}