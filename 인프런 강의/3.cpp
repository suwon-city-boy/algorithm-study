#include<stdio.h>
using namespace std;
int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	int sum = 1;
	printf("1");
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			printf(" + %d", i);
			sum += i;
		}
	}
	printf(" = %d", sum);
}