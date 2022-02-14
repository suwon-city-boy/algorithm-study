#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int dy[50];

int dfs(int x) {
    if (dy[x] > 0) return dy[x];
    else if (x == 1) return 1;
    else if (x == 2) return 2;
    else {
        return dy[x] = dfs(x - 1) + dfs(x - 2);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    cout << dfs(n);
}