#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n, tmp, sum, res;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d", &tmp, &sum);
		res = tmp * (tmp + 1) / 2;
		if (sum == res) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}