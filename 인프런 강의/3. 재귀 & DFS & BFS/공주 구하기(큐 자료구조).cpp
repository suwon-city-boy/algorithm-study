#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;  

int main() {
	int n, k;
	queue<int> q;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	while (q.size() != 1) {
		for (int i = 1; i < k; i++) {
			q.push(q.front());
			q.pop();
		}
		q.pop();
	}
	printf("%d", q.front());
}