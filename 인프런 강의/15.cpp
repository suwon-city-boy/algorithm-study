#include<stdio.h>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, i, j, cnt = 0;
	bool flag;
	scanf("%d", &n);
	for (i = 2; i <= n; i++) {
		flag = true;
		for (j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag == true) cnt++;
	}
	printf("%d", cnt);
}