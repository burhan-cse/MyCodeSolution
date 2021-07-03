#include<bits/stdc++.h>
using namespace std;
int ar[3009];
int n, m, x, y, cost;

void print()
{
    for(int i = 0; i<=m; i++)
        cout<<ar[i]<<" ";
}

int findMI()
{
    int ind = 1;
    for(int i = 2; i<=m; i++)
        if(ar[ind]<ar[i])
            ind = i;
    return ind;
}

int findMIS(int index)
{
    int c = 0;
    for(int i = 1; i<=m; i++)
        if(ar[i]== ar[index])
            c++;
    return c;
}

int main()
{

    cin>>n>>m;
    vector<int>v[m+2];
    vector<pair<int, int> > pr;
    for(int i = 0; i<n; i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        if(x!=1)
            pr.push_back({y, x});
    }
    sort(pr.begin(), pr.end());
    for(int i = 1; i<=m; i++)
    {
        ar[i] = v[i].size();
        v[i].push_back(0);
        sort(v[i].begin(), v[i].end());
    }
    int pi = 0;
    while(true)
    {
        int ind = findMI();
        int ck = findMIS(ind);
        if(ck==1 && ind == 1)
        {
            cout<<cost<<endl;
            return 0;
        }
        if(ar[ind]-ar[i]>1)
        {
            y = pr[pi].first;
            x = pr[pi++].second;
            cost+=y;
            ar[1]++;
            ar[x]--;
            v[x][0]++;
        }
        else
        {
            int costck = pr[pi].first;
            costck+=pr[pi+1].first;
            if(ck==1)
            {
                cout<<cost+min(costck, v[ind][v[ind][0]])<<endl;
                return 0;
            }
        }
    }
}
