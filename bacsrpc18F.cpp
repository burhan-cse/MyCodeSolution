#include<bits/stdc++.h>
using namespace std;

long long n, ar[1009], visited[1009], value[1009], level[1009];
vector<int > v[1009];

long long bfs(int a)
{
    queue<int>q;
    visited[1] = 1;
    q.push(1);
    cost[0] = arr[1];

    while(!q.empty())
    {
        long long fornt = q.front();
        q.pop();
        for(int i = 0; i<v[fornt].size(); i++)
        {
            if(visited[v[fornt][i]]==0)
            {
                if(v[fornt][i]!=a)
                {
                    level[v[fornt][i]] = level[fornt]+1;
                    cost[v[fornt][i]] +=arr[v[fornt][i]];
                    visited[v[fornt][i]] = 1;
                    q.push(v[fornt])
                }
            }
        }
    }
}
