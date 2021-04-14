#include <stdio.h>
using namespace std;

int main() {
	int a[23] = {};
	int t, r;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &r);
		a[r - 1] += 1;
	}
	for (int i = 0; i < 23; i++) {
		printf("%d ", a[i]);
	}
}
