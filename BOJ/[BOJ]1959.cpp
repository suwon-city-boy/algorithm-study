//https://www.acmicpc.net/problem/1959
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int m, n, x = 0, y = 0;
	long long int answer = 0;
	cin >> m >> n;

	y = y + n - 1;
	int d = 1;
	int i = 1;

	while (1) {
		if (d == 1) {
			if (m - i == 0)
				break;
			else {
				x = x + (m - i);
				d = 2;
				answer++;
			}
		}
		else if (d == 2) {
			if (n - i == 0)
				break;
			else {
				y = y - (n - i);
				i++;
				d = 3;
				answer++;
			}
		}
		else if (d == 3) {
			if (m - i == 0)
				break;
			else {
				x = x - (m - i);
				d = 0;
				answer++;
			}
		}
		else if (d == 0) {
			if (n - i == 0)
				break;
			else {
				y = y + (n - i);
				i++;
				d = 1;
				answer++;
			}
		}
	}

	cout << answer << endl;
	cout << x + 1 << " " << y + 1 << endl;
}