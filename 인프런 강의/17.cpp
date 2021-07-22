#include<stdio.h>
#include<algorithm>
int main() {
	int n, i, tmp, ans;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d %d", &tmp, &ans);
		if ((tmp * (tmp + 1)) / 2 == ans) {
			printf("YES");
		}
		else
			printf("NO");
	}
}