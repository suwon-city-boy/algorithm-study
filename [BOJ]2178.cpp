#include <cstdio>
#include <queue>
using namespace std;
int a[101][101];
int dist[101][101];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%1d", &a[i][j]);
            dist[i][j] = 0;
        }
    }

    queue<pair<int, int>> q;
    q.push(make_pair(1, 1));
    dist[1][1] = 1;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (0 < nx && nx <= n && 0 < ny && ny <= m)
            {
                if (dist[nx][ny] == 0 && a[nx][ny] == 1)
                {
                    q.push(make_pair(nx, ny));
                    dist[nx][ny] = dist[x][y] + 1;
                }
            }
        }
    }

    printf("%d", dist[n][m]);
}