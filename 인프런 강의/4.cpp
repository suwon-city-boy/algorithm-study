#include<stdio.h>
using namespace std;
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, min = 2147000000, max = -2147000000;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int tmp;
		scanf("%d", &tmp);
		if (tmp < min) min = tmp;
		if (tmp > max) max = tmp;
	}
	printf("%d", (max - min));
}