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
			printf("%d\n", -pq.top());
			pq.pop();
		}
		else {
			pq.push(-tmp);
		}
	}
}

//음수로 삽입 및 출력해서 최대힙 -> 최소힙으로 변경