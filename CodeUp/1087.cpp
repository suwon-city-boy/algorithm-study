#include <stdio.h>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	int sum = 0, i = 1;
	while (sum < n)
	{
		sum += i++;
	}

	printf("%d", sum);

	return 0;
}