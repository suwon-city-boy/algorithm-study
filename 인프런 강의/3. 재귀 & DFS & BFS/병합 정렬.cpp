#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;  
int n, a[101], tmp[101];

void divide(int lt, int rt) {
	int mid;
	int p1, p2, p3;
	if (lt < rt) { //종료 조건
		//분할
		mid = (lt + rt) / 2;
		divide(lt, mid);
		divide(mid + 1, rt);
		//합병
		p1 = lt;
		p2 = mid + 1;
		p3 = lt;
		while (p1 <= mid && p2 <= rt) {
			if(a[p1] < a[p2]) tmp[p3++] = a[p1++];
			else tmp[p3++] = a[p2++];
		}
		while (p1 <= mid) tmp[p3++] = a[p1++];
		while (p2 <= rt) tmp[p3++] = a[p2++];
		for (int i = lt; i <= rt; i++) {
			a[i] = tmp[i];
		}
	}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	divide(1, n);
	for (int i = 1; i <= n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

/*
 * 후위순회(LRV) -> 각자 쪼갤수 있을 만큼 쪼개다가(L,R) 병합하는 과정(V)
 */
