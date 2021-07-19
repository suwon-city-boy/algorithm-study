#include<stdio.h>
using namespace std;
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, m;
	scanf("%d %d", &n, &m);
	int sum = n;
	printf("%d", n);
	for (int i = n + 1; i <= m; i++) {
		printf(" + %d", i);
		sum += i;
	}
	printf(" = %d", sum);
}