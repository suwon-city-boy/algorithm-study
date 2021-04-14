#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int temp, min = 24;
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		if (temp < min) {
			min = temp;
		}
	}
	printf("%d", min);
}