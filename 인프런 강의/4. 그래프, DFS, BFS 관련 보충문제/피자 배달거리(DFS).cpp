#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<pair<int, int> > hs, pz;
int n, m, res = 2147000000, chk[51], sum, dis;

void dfs(int L, int x) {
	if(L == m) {
		sum = 0;
		for(int i=0; i<hs.size(); i++) {
			int x1 = hs[i].first;
			int y1 = hs[i].second;
			dis = 2147000000;
			for(int j=0; j<m; j++){
				int x2 = pz[chk[j]].first;
				int y2 = pz[chk[j]].second;
				dis = min(dis, abs(x1-x2) + abs(y1-y2));
			}
			sum = sum + dis;
		}
		if(sum < res) res = sum;
	}
	else {
		for(int i=x; i<pz.size(); i++) {
			chk[L] = i;
			dfs(L+1, i+1);
		}
	}
}

int main() {
	int tmp;
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			scanf("%d", &tmp);
			if(tmp == 1) hs.push_back(make_pair(i, j));
			else if(tmp == 2) pz.push_back(make_pair(i, j));
		}
	}
	dfs(1, 1);
	printf("%d", res);
}

