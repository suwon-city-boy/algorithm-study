#include<stdio.h>
using namespace std;
int main() {
	//freopen("input.txt", "rt", stdin);
	char a[20];
	int year;
	scanf("%s", a);
	if (a[7] == '1' || a[7] == '2') {
		year = 1900 + (a[0] - '0') * 10 + (a[1] - '0');
	}
	else {
		year = 2000 + (a[0] - '0') * 10 + (a[1] - '0');
	}
	printf("%d ", 2019 - year + 1);
	if (a[7] == '1' || a[7] == '3') {
		printf("M");
	}
	else {
		printf("W");
	}
}