#include<stdio.h>
using namespace std;
int main() {
	//freopen("input.txt", "rt", stdin);
	char a[100], b[100];
	int i, p = 0;
	gets(a);
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] != ' ') {
			if (a[i] >= 'A' && a[i] <= 'Z') { //대문자
				b[p++] = a[i] + 32; //소문자
			}
			else
				b[p++] = a[i];
		}
	}
	b[p] = '\0';
	printf("%s\n", b);
}