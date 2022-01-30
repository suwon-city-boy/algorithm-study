#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;  
int q[30], ch[30], front = -1, back = -1;
vector<int> map[20];

int main() {
	int from, to;
	for (int i = 0; i < 6; i++) {
		scanf("%d %d", &from, &to);
		map[from].push_back(to);
		map[to].push_back(from);
	}
	q[++back] = 1;
	ch[1] = 1;
	while (front < back) { //큐가 비어있지 않는 이상
		int now = q[++front];
		printf("%d ", now);
		for (int i = 0; i < map[now].size(); i++) {
			if (ch[map[now][i]] == 0) {
				ch[map[now][i]] = 1;
				q[++back] = map[now][i];
			}
		}
	}
}