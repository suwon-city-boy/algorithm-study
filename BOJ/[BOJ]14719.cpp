//https://www.acmicpc.net/problem/14719
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int h, w, answer = 0;
	cin >> h >> w;
	vector<int> v(w);
	for (int i = 0; i < w; i++) {
		cin >> v[i];
	}

	for (int i = 1; i < w; i++) {
		int left = 0; int right = 0;
		for (int j = 0; j < i; j++) {
			left = max(left, v[j]);
		}
		for (int j = i + 1; j < w; j++) {
			right = max(right, v[j]);
		}
		if (min(right, left) > v[i])
			answer += min(right, left) - v[i];
	}

	cout << answer;
}
