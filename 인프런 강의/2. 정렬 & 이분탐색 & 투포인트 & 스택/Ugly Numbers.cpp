#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;  
int a[1501];

int main() {
	int n, p2, p3, p5, min;
	scanf("%d", &n);
	p2 = p3 = p5 = 1;
	a[1] = 1;
	for (int i = 2; i <= n; i++) {
		if (a[p2] * 2 < a[p3] * 3) {
			min = a[p2] * 2;
		}
		else {
			min = a[p3] * 3;
		}
		if (a[p5] * 5 < min) min = a[p5] * 5;
		if (min == a[p2] * 2) p2++;
		if (min == a[p3] * 3) p3++;
		if (min == a[p5] * 5) p5++;
		a[i] = min;
	}
	printf("%d", a[n]);
	return 0;
}

/*
 * 투포인터 알고리즘 응용
 * 투포인터에서는 결과값을 담는 메모리가 있고,
 * 각각 포인터들이 증가하며 적절한 위치에 결과값을 담아 완성하는 패턴
 * 이 문제처럼 키워드가 2, 3, 5 이런식이면 포인터 세개 활용
 */
