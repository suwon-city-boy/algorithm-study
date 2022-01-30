#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;  

int main() {
	priority_queue<int> pq;
	while (1) {
		int tmp;
		scanf("%d", &tmp);
		if (tmp == -1) break;
		if (tmp == 0) {
			printf("%d\n", pq.top());
			pq.pop();
		}
		else {
			pq.push(tmp);
		}
	}
}

//priority queue는 내부적으로 최대 힙 방식으로 동작