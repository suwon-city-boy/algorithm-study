#include <iostream>
using namespace std;

int main() {
	int n, answer = 1;
	cin >> n;
	while (1) {
		if (n == 1) {
			break;
		}
		if (n % 2 == 0)
			n /= 2;
		else
			n = 3 * n + 1;
		answer++;
	}
	cout << answer << endl;
}
