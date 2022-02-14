#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

struct Block {
    int w, h, s;

    Block(int a, int b, int c) {
        w = a;
        h = b;
        s = c;
    }

    bool operator<(const Block b)const{
        return w > b.w;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    int n, answer = 0;
    cin >> n;
    vector<Block> v;
    vector<int> dy(n + 1);
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(Block(a, b, c));
    }
    sort(v.begin(), v.end());
    dy[0] = v[0].h;
    for (int i = 1; i < n; i++) {
        int max = 0;
        for (int j = i - 1; j >= 0; j--) {
            if (v[i].s < v[j].s) {
                if (max < dy[j]) max = dy[j];
            }
        }
        dy[i] = max + v[i].h;
        if (answer < dy[i]) answer = dy[i];
    }
    cout << answer;
}