#include<iostream>
#include<stdio.h>
using namespace std;

int digit_sum(int x) {
	int sum = 0;
	while (x > 0) {
		sum += (x%10);
		x /= 10;
	}
	return sum;
}

int main() {
	int n, tmp, sum, num, max = -1;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &tmp);
		sum = digit_sum(tmp);
		if (max < sum) {
			max = sum;
			num = tmp;
		}
		else if (max == sum) {
			if (num < tmp) {
				num = tmp;
			}
		}
	}
	printf("%d", num);
	return 0;
}