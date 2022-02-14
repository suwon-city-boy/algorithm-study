#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n, answer = 0;
    cin >> n;
    vector<int> a(n + 1), dy(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    dy[1] = 1;
    for (int i = 2; i <= n; i++) {
        int max = 0;
        for (int j = i - 1; j >= 1; j--) {
            if (a[i] > a[j]) {
                if (dy[j] > max) max = dy[j];
            }
            dy[i] = max + 1;
            if (dy[i] > answer) answer = dy[i];
        }
    }
    cout << answer;
}