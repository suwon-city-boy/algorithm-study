#include<stdio.h>
using namespace std;
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, m, sum = 0;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		if (i % m == 0) {
			sum += i;
		}
	}
	printf("%d", sum);
}