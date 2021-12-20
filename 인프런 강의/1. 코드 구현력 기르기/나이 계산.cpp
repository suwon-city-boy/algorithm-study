#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	char a[20];
	int year, age;
	scanf("%s", &a);
	if ((a[7] - '0') < 3) {
		year = 1900 + (a[0] - '0') * 10 + (a[1] - '0');
	} else {
		year = 2000 + (a[0] - '0') * 10 + (a[1] - '0');
	}
	age = 2019 - year + 1;
	printf("%d", age);
	if (a[7] == '1' || a[7] == '3') printf(" M");
	else printf(" W");
	return 0;
}