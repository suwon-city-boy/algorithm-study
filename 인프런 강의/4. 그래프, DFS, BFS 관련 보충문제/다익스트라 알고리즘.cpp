#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int chk[30];

struct Edge {
	int e, v;

	Edge(int a, int b) {
		e = a;
		v = b;
	}

	bool operator<(const Edge e)const {
		return v < e.v;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	int n, m, a, b, c;
	priority_queue<Edge> q;
	cin >> n >> m;
	vector<int> dis(n + 1, 2147000000);
	vector<pair<int, int> > map[30];
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c; //다익스트라는 가중치가 양수일때만 가능!
		map[a].push_back(make_pair(b, c));
	}
	q.push(Edge(1, 0));
	dis[1] = 0;
	while (!q.empty()) {
		Edge now = q.top();
		q.pop();
		int e = now.e;
		int val = now.v;
		for (int i = 0; i < map[e].size(); i++) {
			int next = map[e][i].first;
			int nextDis = val + map[e][i].second;
			if (dis[next] > nextDis) {
				dis[next] = nextDis;
				q.push(Edge(next, nextDis));
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if (dis[i] != 2147000000) cout << i << " : " << dis[i] << endl;
		else cout << i << " : impossible" << endl;
	}
}

//0 - - - - -
//(1, 0)