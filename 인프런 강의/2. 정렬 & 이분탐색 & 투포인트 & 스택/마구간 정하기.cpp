#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int check(int dis, int x[], int n) { // dis == mid
	int pos = x[1], cnt = 1;
	for (int i = 2; i <= n; i++) {
		if (x[i] - pos >= dis) {
			cnt++;
			pos = x[i];
		}
	}
	return cnt;
}

int main() {
	int n, c, i, res = 0;
	scanf("%d %d", &n, &c);
	int* a = new int[n + 1];
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a + 1, a + n + 1);
	
	//답의 범위 : 1 ~ 9
	int lt = 0, mid, rt;
	rt = a[n];
	while (lt <= rt) {
		//범위 줄이기
		mid = (lt + rt) / 2;
		//검사
		if (check(mid, a, n) >= c) {
			res = mid;
			lt = mid + 1;
		}
		else rt = mid - 1;
	}
	printf("%d", res);
	delete[] a;
	return 0;
}

/*
* 이분 검색 : 답의 범위가 유추 가능할 때, 그 범위를 줄여 나가면서 답을 찾음
* 범위 줄이기(lt, mid, rt) 후 검사 -> 반복
*/
