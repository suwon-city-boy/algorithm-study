#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

struct Data {
    int money;
    int when;

    Data(int a, int b) {
        this->money = a;
        this->when = b;
    }

    bool operator<(const Data& b)const {
        return this->when > b.when;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    int n, max = 0, answer = 0;
    cin >> n;
    vector<Data> v;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
        int money, when;
        cin >> money >> when;
        v.push_back(Data(money, when));
        if (max < when) max = when;
    }
    sort(v.begin(), v.end());
    int j = 0;
    for (int i = max; i >= 1; i--) {
        for (; j < n; j++) {
            if (i > v[j].when) break;
            pq.push(v[j].money);
        }
        if (!pq.empty()) {
            answer += pq.top();
            pq.pop();
        }
    }
    cout << answer;
}