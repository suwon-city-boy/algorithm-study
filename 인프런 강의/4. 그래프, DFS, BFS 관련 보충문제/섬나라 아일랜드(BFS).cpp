#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int map[30][30], cnt = 0;
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1}; 
int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};

struct Point {
	int x, y;
	
	Point(int a, int b){
		x = a;
		y = b;
	}
};

int main() {
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			scanf("%d", &map[i][j]);
		}
	}
	queue<Point> q;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(map[i][j] == 1){
				q.push(Point(i, j));
				map[i][j] = 0;
				while(!q.empty()){
					Point p = q.front();
					q.pop();
					for(int k=0; k<8; k++){
						int nx = p.x + dx[k];	
						int ny = p.y + dy[k];
						if(nx < 1 || ny < 1 || nx > n || ny > n) continue;
						if(map[nx][ny] == 1){
							q.push(Point(nx, ny));
							map[nx][ny] = 0;
						}
					}
				}
				cnt++;
			}
		}
	}
	printf("%d", cnt);
}

