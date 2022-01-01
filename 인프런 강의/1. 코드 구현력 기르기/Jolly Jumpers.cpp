#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	int n, i, pre, now, pos;
	scanf("%d", &n);
	vector<int> ch(n);
	scanf("%d", &pre);
	for (int i = 1; i < n; i++) {
		scanf("%d", &now);
		pos = abs(now - pre);
		if (pos > 0 && pos < n && ch[pos] == 0) {
			ch[pos] = 1;
		}
		else {
			printf("NO");
			return 0;
		}
		pre = now;
	}
	printf("YES");
	return 0;
}