#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int ans[25*25];
int a[25][25];
int d[25][25];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int n;
void bfs(int x, int y, int cnt)
{
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    d[x][y] = cnt;
    ans[cnt]++;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (0 <= nx && nx < n && 0 <= ny && ny < n)
            {
                if(a[nx][ny] == 1 && d[nx][ny] == 0)
                {
                    q.push(make_pair(nx, ny));
                    d[nx][ny] = cnt;
                    ans[cnt]++;
                }
            }
        }
    }
}

int main()
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%1d", &a[i][j]);
        }
    }

    int cnt = 0;  
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1 && d[i][j] == 0)
                bfs(i, j, ++cnt);
        }
    }

    printf("%d\n", cnt);
    sort(ans+1, ans+cnt+1);
    for (int i = 1; i <= cnt; i++) {
		printf("%d\n", ans[i]);
	}
}
