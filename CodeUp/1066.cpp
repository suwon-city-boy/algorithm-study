#include <stdio.h>
using namespace std;

int main() {
	int arr[3];
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		if (arr[i] % 2 == 0) {
			printf("even\n");
		}
		else {
			printf("odd\n");
		}
	}
}