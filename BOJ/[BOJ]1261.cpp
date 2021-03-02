#include <cstdio>
#include <deque>
using namespace std;
int a[101][101];
int d[101][101];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            scanf("%1d", &a[i][j]);
            d[i][j] = -1;
        }

    deque<pair<int, int>> dq;
    dq.push_back(make_pair(1, 1));
    d[1][1] = 0;
    while (!dq.empty())
    {
        int x = dq.front().first;
        int y = dq.front().second;
        dq.pop_front();
        for (int k = 0; k < 4; k++)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (1 <= nx && nx <= 100 && 1 <= ny && ny <= 100)
            {
                if (d[nx][ny] == -1)
                {
                    if (a[nx][ny] == 1)
                    {
                        d[nx][ny] = d[x][y] + 1;
                        a[nx][ny] = 0;
                        dq.push_back(make_pair(nx, ny));
                    }
                    else
                    {
                        d[nx][ny] = d[x][y];
                        dq.push_front(make_pair(nx, ny));
                    }
                }
            }
        }
    }
    printf("%d\n", d[n][m]);
}
