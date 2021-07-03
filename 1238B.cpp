#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q, x, cnt;
    cin>>q;
    map<int, bool>mp;
    while(q--)
    {
        int n, r;
        cin>>n>>r;
        vector<int>v;
        mp.clear();
        for(int i = 0; i<n; i++)
        {
            cin>>x;
            if(mp[x]==1)
                continue;
            mp[x] = 1;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        x = 0, cnt = 0;
        for(int i = v.size()-1; i>=0; i--)
        {
            if(v[i]-x>0)
                cnt++;
            else
                break;
            x+=r;
        }
        cout<<cnt<<endl;
    }
}
