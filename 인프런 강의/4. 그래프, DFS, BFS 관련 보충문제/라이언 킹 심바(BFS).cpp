#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int map[30][30], chk[30][30];

struct Lion {
	int x, y, s, ate;
	
	void sizeUp() {
		ate = 0;
		s++;
	}
};

struct State {
	int x, y, dis;
	
	State(int a, int b, int c){
		x = a;
		y = b;
		dis = c;
	}
	
	bool operator<(const State &b)const{
		if(dis!=b.dis) return dis>b.dis;
		if(x!=b.x) return x>b.x;
		else return y>b.y;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	int n, res;
	scanf("%d", &n);
	priority_queue<State> q;
	Lion simba;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> map[i][j];
			if(map[i][j] == 9){
				simba.x = i;
				simba.y = j;
				simba.ate = 0;
				simba.s = 2;
				q.push(State(i, j, 0));
				map[i][j] = 0;
			}
		}
	}
	while(!q.empty()){
		State now = q.top(); //pq�� front() ��� top()
		q.pop();
		//�� �� �ִ� ��ġ �� ���� �Ÿ��� ����� ��
		int x = now.x;
		int y = now.y;
		int dis = now.dis;
			
		//�� ���� �䳢�� ���� �� �ִٸ� 
		if(map[x][y]!=0 && map[x][y] < simba.s){
			simba.x = x;
			simba.y = y;
			simba.ate++;
			if(simba.s == simba.ate) simba.sizeUp();
			map[x][y] = 0;
			cout << x << " " << y << " " << dis << endl;
			//���䳢�� �Ծ��ٸ�, �� ���� �������� �ٽ� �Ǵܡ�
			//(�ɹ��� ���� ��ġ�� ���� �ּ� �Ÿ��� ����ǹǷ�)
			//(���� ť�� ����, chk �迭�� �ʱ�ȭ)
			//�� �κ��� ���� �߿��� 
			for(int i=0; i<n; i++){
				for(int j=0; j<n; j++){
					chk[i][j] = 0;
				}
			}
			while(!q.empty()) {
				q.pop();
			}
			res = now.dis;
		}
		
		for(int k=0; k<4; k++){
			int nx = x + dx[k];
			int ny = y + dy[k];
			if(nx<0 || nx>n-1 || ny<0 || ny>n-1 || map[nx][ny]>simba.s || chk[nx][ny]>0) continue;
			//���� ��ġ���� �� �� �ִ� ������ �� �־����, ���� �ڵ忡�� �Ǵ�
			q.push(State(nx, ny, dis + 1));
			chk[nx][ny] = 1;
		}
	}
	cout << res;
}

