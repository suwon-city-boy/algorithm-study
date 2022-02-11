#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int fibo(int x) {
    if (x == 0) return 0;
    else if (x == 1) return 1;
    else {
        return fibo(x - 1) + fibo(x - 2);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    cout << fibo(n);
}