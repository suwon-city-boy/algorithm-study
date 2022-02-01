#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int map[8][8], dis[8][8];
int dx[4] = {1, 0, -1, 0}; 
int dy[4] = {0, 1, 0, -1};

struct Point {
	int x, y;
	
	Point(int a, int b){
		x = a;
		y = b;
	}
};

int main() {
	for(int i=1; i<=7; i++){
		for(int j=1; j<=7; j++){
			scanf("%d", &map[i][j]);
		}
	}
	queue<Point> q;
	q.push(Point(1, 1));
	dis[1][1] = 0;
	while(!q.empty()){
		Point now = q.front();
		q.pop();
		for(int k=0; k<4; k++){
			int nx = now.x + dx[k];
			int ny = now.y + dy[k];
			if(nx < 1 || ny < 1 || nx > 7 || ny > 7) continue;
			if(map[nx][ny] == 0){
				q.push(Point(nx, ny));
				map[nx][ny] = 1;
				dis[nx][ny] = dis[now.x][now.y] + 1;
			}
		}
	}
	printf("%d", dis[7][7]);
}

