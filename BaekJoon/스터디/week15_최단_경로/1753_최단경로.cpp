#include <bits/stdc++.h>

using namespace std;

#define SIZE 20001

int dist_arr[SIZE];

void Solve(vector<vector<pair<int, int>>> &graph, int start)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.emplace(0, start);
    dist_arr[start] = 0;

    while (!pq.empty())
    {
        int dist = pq.top().first;
        int now_v1 = pq.top().second;
        pq.pop();

        if (dist_arr[now_v1] < dist)
            continue;

        for (auto v2 : graph[now_v1])
        {
            int cost = dist + v2.second;
            int now_v2 = v2.first;

            if (dist_arr[now_v2] > cost)
            {
                dist_arr[now_v2] = cost;
                pq.emplace(cost, now_v2);
            }
        }
    }
}

int main()
{
    int V, E;
    cin >> V >> E;
    int K;
    // 시작 정점
    cin >> K;

    int v1, v2, cost;
    vector<vector<pair<int, int>>> graph(V + 1);
    for (int i = 0; i < E; i++)
    {
        cin >> v1 >> v2 >> cost;

        graph[v1].emplace_back(v2, cost);
    }

    fill(dist_arr, dist_arr + SIZE, INT_MAX);

    Solve(graph, K);

    for (int i = 1; i <= V; i++)
    {
        if (dist_arr[i] == INT_MAX)
            cout << "INF\n";
        else
            cout << dist_arr[i] << '\n';
    }
}