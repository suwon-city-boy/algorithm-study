#include <stdio.h>
using namespace std;

int main() {
	int t;
	int a[t];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = t; i > 0; i--) {
		printf("%d ", a[i-1]);
	}
}