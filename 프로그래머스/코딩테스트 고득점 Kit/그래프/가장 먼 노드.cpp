#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    vector<vector<int> > graph(n + 1);

    for (int i = 0; i < edge.size(); i++) {
        int from = edge[i][0];
        int to = edge[i][1];

        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    queue<int> q;
    vector<int> dist(n + 1, -1);
    dist[1] = 0;
    q.push(1);

    while (!q.empty()) {
        int now = q.front();
        q.pop();
        for (int i = 0; i < graph[now].size(); i++) {
            if (dist[graph[now][i]] == -1) {
                dist[graph[now][i]] = dist[now] + 1;
                q.push(graph[now][i]);
            }
        }
    }

    int far = *max_element(dist.begin(), dist.end());

    for (int i = 0; i < dist.size(); i++)
    {
        if (dist[i] == far)
        {
            answer++;
        }
    }

    return answer;
}