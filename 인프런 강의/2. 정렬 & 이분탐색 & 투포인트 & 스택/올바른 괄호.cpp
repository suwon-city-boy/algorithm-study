#include <iostream>
#include <stdio.h>
#include <stack>
#include <algorithm>
using namespace std;  

int main() {
	char a[31];
	stack<char> s;
	scanf("%s", &a);
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(') {
			s.push(a[i]);
		}
		else {
			if (s.empty()) {
				printf("NO");
				return 0;
			}
			s.pop();
		}
	}
	if (s.empty()) printf("YES");
	else printf("NO");
	return 0;
}

/*
 * 
 */
