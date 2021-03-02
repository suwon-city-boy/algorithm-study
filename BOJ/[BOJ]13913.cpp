#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
using namespace std;

int dist[200001];
int from[200001];

int main()
{
    int n, k;
    cin >> n >> k;

    memset(dist, -1, sizeof(dist));

    queue<int> q;
    q.push(n);
    dist[n] = 0;
    while (!q.empty())
    {
        int now = q.front();
        q.pop();

        if(now == k)
            break;

        if (now + 1 < 100000)
        {
            if (dist[now+1] == -1)
            {
                dist[now + 1] = dist[now] + 1;
                q.push(now + 1);
                from[now+1] = now;
            }
        }

        if (now - 1 >= 0)
        {
            if (dist[now - 1] == -1)
            {
                dist[now - 1] = dist[now] + 1;
                q.push(now - 1);
                from[now - 1] = now;
            }
        }

        if (now * 2 < 200000)
        {
            if (dist[now*2] == -1)
            {
                dist[now * 2] = dist[now] + 1;
                q.push(now * 2);
                from[now * 2] = now;
            }
        }
    }
    cout << dist[k] << '\n';

    stack<int> s;
    for(int i=k; i!=n; i=from[i])
        s.push(i);
    cout << n << ' ';
    while(!s.empty()){
        cout << s.top() << ' ';
        s.pop();
    }  
}
