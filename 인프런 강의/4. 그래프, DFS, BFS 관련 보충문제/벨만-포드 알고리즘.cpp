#include<stdio.h>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
int dist[101];
struct Edge {
	int s;
	int e;
	int val;

	Edge(int a, int b, int c) {
		s = a;
		e = b;
		val = c;
	}
};

int main() {
	vector<Edge> Ed;
	int i, n, m, a, b, c, j;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		Ed.push_back(Edge(a, b, c));
	}
	for (i = 1; i <= n; i++) {
		dist[i] = 2147000000;
	}
	int s, e;
	scanf("%d %d", &s, &e);
	dist[s] = 0;
	for (i = 1; i < n; i++) { //i : i개의 엣지를 통해 갈 때의 최소 값
		for (j = 0; j < Ed.size(); j++) {
			int s = Ed[j].s;
			int e = Ed[j].e;
			int w = Ed[j].val;
			if (dist[s] != 2147000000 && dist[s] + w < dist[e]) {
				dist[e] = dist[s] + w;
			}
		}
	}
	for (j = 0; j < Ed.size(); j++) {
		int u = Ed[j].s;
		int v = Ed[j].e;
		int w = Ed[j].val;
		//한번 더 해봤는데 아래 조건이 만족해서 돌아간다면 음의 사이클이 존재하는 것
		if (dist[u] != 2147000000 && dist[u] + w < dist[v]) {
			printf("-1\n");
			exit(0);
		}
	}
	printf("%d\n", dist[e]);
	return 0;
}