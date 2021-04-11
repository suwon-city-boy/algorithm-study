#include <stdio.h>
using namespace std;

int main() {
	while (1) {
		int n;
		scanf("%d", &n);
		if (n != 0) {
			printf("%d\n", n);
		}
		else {
			break;
		}
	}
	return 0;
}