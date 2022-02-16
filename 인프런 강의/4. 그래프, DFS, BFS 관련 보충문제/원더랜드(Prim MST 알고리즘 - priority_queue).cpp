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
		return v > e.v;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	int n, m, res = 0;
	int a, b, c;
	vector<pair<int, int> > v[30];
	priority_queue<Edge> q;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
		v[b].push_back(make_pair(a, c));
	}
	q.push(Edge(1, 0));
	while (!q.empty()) {
		Edge now = q.top();
		q.pop();
		int e = now.e;
		int val = now.v;
		if (chk[e] == 0) {
			res += val;
			chk[e] = 1;
			for (int i = 0; i < v[e].size(); i++) {
				q.push(Edge(v[e][i].first, v[e][i].second));
			}
		}
	}
	cout << res;
}