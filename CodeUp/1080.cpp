#include <stdio.h>
using namespace std;

int main() {
	int n;
	int sum = 0;
	int i = 1;
	scanf("%d", &n);
	while (sum < n) {
		sum += i++;
	}
	printf("%d", i-1);
	return 0;
}