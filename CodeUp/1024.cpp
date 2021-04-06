#include <stdio.h>
using namespace std;

int main() {
	char data[21];
	scanf("%s", &data);
	for (int i = 0; data[i] != '\0'; i++) {
		printf("\'%c\'\n", data[i]);
	}
	return 0;
}
