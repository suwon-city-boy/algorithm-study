#include <iostream>
#include <stdio.h>
using namespace std;

int recur(int x) {
	if (x == 1 || x == 0) {
		return 1;
	}
	else {
		return recur(x - 1) * x;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	cout << recur(n);
}
