//https://www.acmicpc.net/problem/1966
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	int n, m, t, prior;
	cin >> t;

	while (t--) {
		cin >> n >> m;
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		int answer = 0;
		for (int i = 0; i < n; i++) {
			cin >> prior;
			q.push(make_pair(i, prior));
			pq.push(prior);
		}

		while (!q.empty()) {
			int idx = q.front().first;
			int prior = q.front().second;

			if (prior == pq.top()) {
				q.pop();
				pq.pop();
				if (idx == m) {
					cout << ++answer << endl;
					break;
				}
				else
					answer++;
			}
			else {
				q.push(make_pair(idx, prior));
				q.pop();
				pq.push(pq.top());
				pq.pop();
			}
		}
	}
}
