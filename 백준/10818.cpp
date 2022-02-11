#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max = *max_element(a.begin(), a.end());
    int min = *min_element(a.begin(), a.end());

    printf("%d %d", min, max);
}