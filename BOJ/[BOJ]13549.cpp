#include <cstdio>
#include <deque>
#include <cstring>
using namespace std;
int d[100001];
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    deque<int> dq;
    memset(d, -1, sizeof(d));
    dq.push_back(n);
    d[n] = 0;
    while (!dq.empty())
    {
        int now = dq.front();
        dq.pop_front();

        if (now == k)
            break;

        if (now * 2 <= 100000)
        {
            if (d[now * 2] == -1)
            {
                d[now * 2] = d[now];
                dq.push_front(now * 2);
            }
        }
        if (now + 1 <= 100000)
        {
            if (d[now + 1] == -1)
            {
                d[now + 1] = d[now] + 1;
                dq.push_back(now + 1);
            }
        }
        if (now - 1 >= 0)
        {
            if (d[now - 1] == -1)
            {
                d[now - 1] = d[now] + 1;
                dq.push_back(now - 1);
            }
        }
    }

    printf("%d", d[k]);
}
