#include <iostream>
#include <stdio.h>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;  

int main() {
	int n, tmp, pos = 1;
	vector<char> str;
	stack<int> s;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &tmp);
		s.push(tmp);
		str.push_back('P');
		while (1) {
			if (s.empty()) break;
			if (s.top() == pos) {
				s.pop();
				str.push_back('O');
				pos++;
			}
			else break;
		}
	}
	if (!s.empty()) printf("impossible");
	else {
		for (int i = 0; i < str.size(); i++) {
			printf("%c", str[i]);
		}
	}
	return 0;
}

/*
 * 
 */
