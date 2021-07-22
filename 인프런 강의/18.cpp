#include<stdio.h>
#include<algorithm>
int main() {
	int n, i, std, max = -2147000000, cnt = 0;

	scanf("%d %d", &n, &std);

	for (i = 1; i <= n; i++) {
		int tmp;
		scanf("%d", &tmp);
		if (tmp > std)
			cnt++;
		else
			cnt = 0;
		if (cnt > max) max = cnt;
	}
	printf("%d", max);
}