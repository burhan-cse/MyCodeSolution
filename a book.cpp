#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, sum = 0, x;
        cin>>n;
        map<int, int>mp, ck;
        vector<int>v;
        for(int i = 0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
            mp[x]++;
        }
        for(int i = 0; i<n; i++)
        {
            if(!ck[v[i]])
                sum+=mp[v[i]];
            ck[v[i]] = 1;
            cout<<n-sum<<" ";

        }
        cout<<endl;
    }
}
