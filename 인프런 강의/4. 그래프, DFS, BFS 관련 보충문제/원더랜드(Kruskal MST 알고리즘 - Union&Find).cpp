#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int unf[10001];

struct Edge {
	int s, e, v;

	Edge(int a, int b, int c) {
		s = a;
		e = b;
		v = c;
	}

	bool operator<(const Edge e)const {
		return v < e.v;
	}
};

int Find(int v) {
	if (v == unf[v]) return v;
	else return unf[v] = Find(unf[v]);
}

void Union(int a, int b) {
	a = Find(a);
	b = Find(b);
	if (a != b) unf[a] = b;
}

int main() {
	ios_base::sync_with_stdio(false);
	int n, m, res = 0;
	int a, b, c;
	vector<Edge> Ed;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		unf[i] = i;
	}
	for (int i = 1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		Ed.push_back(Edge(a, b, c));
	}
	//����ġ�� �������� ����
	sort(Ed.begin(), Ed.end());
	for (int i = 0; i < m; i++) { //����ġ�� ���� �ͺ���
		int fa = Find(Ed[i].s);
		int fb = Find(Ed[i].e);
		if (fa != fb) { //�̹� ���� ���� ����ġ�� ����Ǿ��ٸ� ����
			res += Ed[i].v;
			Union(Ed[i].s, Ed[i].e);
		}
	}
	cout << res;
}