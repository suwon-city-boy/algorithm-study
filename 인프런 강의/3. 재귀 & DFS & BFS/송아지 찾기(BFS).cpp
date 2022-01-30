#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;  
int dis[10001], chk[10001];
int d[3] = { 1, -1, 5 };

int main() {
	int s, e;
	queue<int> q;
	scanf("%d %d", &s, &e);
	q.push(s);
	dis[s] = 0;
	chk[s] = 1;
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		if (now == e) break;
		for (int i = 0; i < 3; i++) {
			int next = now + d[i];
			if (next <= 0 || next > 10000) continue;
			if (chk[next] == 0) {
				chk[next] = 1;
				dis[next] = dis[now] + 1;
				q.push(next);
			}
		}
	}
	printf("%d", dis[e]);
}