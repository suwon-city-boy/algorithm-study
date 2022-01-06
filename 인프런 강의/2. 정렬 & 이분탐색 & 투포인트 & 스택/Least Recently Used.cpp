#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	int s, n, i, j, tmp, pos;
	scanf("%d %d", &s, &n);
	vector<int> a(s+1, 0);
	while (n--) {
		//입력
		scanf("%d", &tmp);
		//처리
		pos = -1;
		for (i = 0; i < s; i++) {
			if (a[i] == tmp) {
				pos = i;
			}
		}
		if (pos == -1) { //MISS
			for (j = s - 1; j > 0; j--) {
				a[j] = a[j-1];
			}
			a[0] = tmp;
		}
		else { //HIT
			for (j = pos; j > 0; j--) {
				a[j] = a[j-1];
			}
			a[0] = tmp; //a[j+1] = hit;
		}
	}
	//출력
	for (i = 0; i < s; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}