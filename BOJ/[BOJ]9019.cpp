#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstring>
using namespace std;
char how[10001];
int from[10001];
bool check[10001];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(how, 0, sizeof(how));
        memset(from, 0, sizeof(from));
        memset(check, false, sizeof(check));
        int a, b;
        cin >> a >> b;
        queue<int> q;
        q.push(a);
        check[a] = true;
        from[a] = -1;
        while (!q.empty())
        {
            int now = q.front();
            q.pop();
            int next = (now * 2) % 10000;
            if (check[next] == false)
            {
                q.push(next);
                check[next] = true;
                how[next] = 'D';
                from[next] = now;
            }

            next = (now == 0) ? 9999 : now - 1;
            if (check[next] == false)
            {
                q.push(next);
                check[next] = true;
                how[next] = 'S';
                from[next] = now;
            }

            next = (now % 1000) * 10 + now / 1000;
            if (check[next] == false)
            {
                q.push(next);
                check[next] = true;
                how[next] = 'L';
                from[next] = now;
            }

            next = (now % 10) * 1000 + now / 10;
            if (check[next] == false)
            {
                q.push(next);
                check[next] = true;
                how[next] = 'R';
                from[next] = now;
            }
        }

        stack<char> s;
        for (int i = b; i != a; i = from[i])
        {
            s.push(how[i]);
        }

        while (!s.empty())
        {
            cout << s.top();
            s.pop();
        }
        cout << "\n";

        // string ans = "";
        // while (b != a) {
        //     ans += how[b];
        //     b = from[b];
        // }
        // reverse(ans.begin(), ans.end());
        // cout << ans << '\n';
    }
    return 0;
}
