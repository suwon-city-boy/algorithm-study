#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
vector<int> a[20001];
int color[20001];

bool dfs(int now, int c){
    color[now] = c;
    for (int i = 0; i < a[now].size(); i++)
    {
        int next = a[now][i];
        if(color[next] == 0){
            if(!dfs(next, 3-c))
                return false;
        } else {
            if(color[next] == color[now])
                return false;
        }
        
    }
    return true;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {   
        int v, e;
        scanf("%d %d", &v, &e);
        
        for (int i = 0; i < v; i++) {
            a[i].clear();
            color[i] = 0;
        }

        while (e--)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            a[x].push_back(y);
            a[y].push_back(x);
        }

        bool result = true;
        for (int i = 0; i < v; i++)
        {
            if (color[i] == 0)
                if (!dfs(i, 1))
                    result = false;
        }

        printf("%s\n", result ? "YES" : "NO");
    }
}
