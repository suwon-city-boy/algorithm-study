#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t, cnt = 0;
    cin >> t;
    while (t--) {
        string s;
        int sum = 0;
        cin >> s;
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == 'O') {
                sum += ++cnt;
            }
            else {
                cnt = 0;
            }
        }
        cout << sum << endl;
        cnt = 0;
    }
}