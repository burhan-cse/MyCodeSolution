#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1253B.txt","r", stdin);
    int t, n, m, x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<pair<int, int> >v;
        vector<pair<int, pair<int,int> > >v1;
        for(int i = 1; i<=n; i++)
        {
            cin>>x;
            v.push_back({x,i});
        }
        if(n>m)
            cout<<-1<<endl;
        else
        {
            sort(v.begin(),v.end());
            for(int i=0; i<n; i++)
            {
                int temp = v[i].first+
            }
        }
    }
}

