#include <cstdio>
#include <queue>
using namespace std;
int a[1001][1001];
int d[1001][1001];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int main()
{
    queue<pair<int, int>> q;
    int n, m;
    scanf("%d %d", &m, &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
            d[i][j] = -1;
            if (a[i][j] == 1)
            {
                q.push(make_pair(i, j));
                d[i][j] = 0;
            }
        }
    }

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (0 <= nx && nx < n && 0 <= ny && ny < m)
            {
                if (d[nx][ny] == -1 && a[nx][ny] == 0)
                {
                    q.push(make_pair(nx, ny));
                    d[nx][ny] = d[x][y] + 1;
                    a[nx][ny] = 1;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0 && d[i][j] == -1)
            {
                printf("-1");
                return 0;
            }
            if (d[i][j] > ans)
                ans = d[i][j];
        }
    }
    printf("%d", ans);
    return 0;
}
