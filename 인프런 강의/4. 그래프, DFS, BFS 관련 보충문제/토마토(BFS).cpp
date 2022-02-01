#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int dx[4] = {1, 0, -1, 0}; 
int dy[4] = {0, 1, 0, -1};
int b[1001][1001], d[1001][1001];

int main() {
	ios_base::sync_with_stdio(false);
	int n, m;
	queue<pair<int, int> > q;
	scanf("%d %d", &m, &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> b[i][j];
			if(b[i][j] == 1){
				q.push(make_pair(i, j));
				d[i][j] = 0;	
			}
		}
	}
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for(int k=0; k<4; k++){
			int nx = x + dx[k];
			int ny = y + dy[k];
			if(nx < 0 || ny < 0 || nx > n-1 || ny > m-1) continue;
			if(b[nx][ny] == 0){
				q.push(make_pair(nx, ny));
				b[nx][ny] = 1;
				d[nx][ny] = d[x][y] + 1;
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(b[i][j] == 0){
				cout << -1;
				return 0; //exit(0);
			}
		}
	}
	int res = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(d[i][j] > res) {
				res = d[i][j];
			}
		}
	}
	cout << res;
}

