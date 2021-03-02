#include <cstdio>
#include <queue>
int d[200001];
using namespace std;

int main()
{
    int n, k;
    queue<int> q;
    scanf("%d %d", &n, &k);

    q.push(n);
    d[n] = 0;
    while (!q.empty())
    {
        int now = q.front();
        q.pop();

        if (now == k)
			break;

        if (now + 1 <= 100000)
        {
            if(d[now+1] == 0)
            {
                d[now+1] = d[now] + 1;
                q.push(now+1);
            }
        }

        if (now - 1 >= 0)
        {
            if(d[now-1] == 0)
            {
                d[now-1] = d[now] + 1;
                q.push(now-1);
            }
        }

        if (now * 2 <= 200000)
        {
            if(d[now*2] == 0)
            {
                d[now*2] = d[now] + 1;
                q.push(now*2);
            }
        }
    }

    printf("%d\n", d[k]);
}
