#include<stdio.h>
using namespace std;
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, i, cnt[10], max = -2147000000, res;
	char a[101];
	scanf("%s", &a);
	for (i = 0; a[i] != '\0'; i++) {
		int tmp = a[i] - '0';
		cnt[tmp]++;
	}
	for (i = 0; i <= 9; i++) {
		if (cnt[i] >= max) {
			max = cnt[i];
			res = i;
		}
	}
	printf("%d", res);
}