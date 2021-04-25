//https://www.acmicpc.net/problem/3048
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
map<char, int> side;

int main() {
	int n1, n2, t;
	cin >> n1 >> n2;

	string str = "";
	for (int i = 0; i < n1; i++) {
		char temp;
		cin >> temp;
		side[temp] = 0;
		str += temp;
	}

	reverse(str.begin(), str.end());

	for (int i = 0; i < n2; i++) {
		char temp;
		cin >> temp;
		side[temp] = 1;
		str += temp;
	}

	cin >> t;
	for (int k = 0; k < t; k++) {
		for (int i = 0; i < str.size() - 1; i++) {
			// 단순히 달라선 안되고 방향이 있기에 이런 조건식이 나옴
			if (side[str[i]] == 0 && side[str[i + 1]] == 1) {
				char temp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = temp;
				i++;
			}
		}
	}

	cout << str;
}