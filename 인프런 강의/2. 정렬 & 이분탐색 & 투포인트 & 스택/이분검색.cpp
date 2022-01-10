#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m, i, tmp;
	scanf("%d %d", &n, &m);
	vector<int> a;
	for (i = 0; i < n; i++) {
		scanf("%d", &tmp);
		a.push_back(tmp);
	}
	sort(a.begin(), a.end());

	int lt = 0, mid, rt = n-1;
	while (lt <= rt) {
		mid = (lt + rt) / 2;
		if (a[mid] == m) {
			printf("%d", mid + 1);
			return 0;
		}
		else if (a[mid] < m) {
			lt = mid + 1;
		}
		else {
			rt = mid - 1;
		}
	}
	return 0;
}