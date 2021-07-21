#include<stdio.h>
using namespace std;
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, i, cnt = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		int tmp = i;
		while (tmp > 0) {
			tmp = tmp / 10;
			cnt++;
		}
	}
	printf("%d", cnt);
}