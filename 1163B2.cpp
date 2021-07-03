#include<bits/stdc++.h>
using namespace std;

int mp[11];

int main()
{
    int n;
    cin>>n;
    if(n<=2)
    {
        cout<<n<<endl;
        return 0;
    }
    int u[n+2];
    for(int i = 0; i<n; i++)
    {
        cin>>u[i];
        mp[u[i]]++;
    }
    for(int i = n-1; i>=0; i--)
    {
        vector<int>v;
        for(int j = 1; j<=10; j++)
        {
            if(mp[j]!=0)
                v.push_back(mp[j]);
        }
        mp[u[i]]--;
        sort(v.begin(), v.end());
        int c  = 0, x1, x2, x3;
        for(int j = 1; j<v.size(); j++)
        {
            if(v[j]!=v[j-1])
            {
                c++;
                x1 = j;
            }
        }
        if(c==0)
        {
            if(v[v.size()-1]!=1)
                continue;
            else
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
        else if(c==1)
        {
            x2 = v[x1] - 1;
            x3 = v[x1-1] -1;

            int cc = 1;
            for(int j = 0; j<v.size(); j++)
            {
                if(v[j]==x3 && j!=x1-1)
                    cc++;
            }
            if(cc==v.size() || cc==1)
            {
                cout<<i+1<<endl;
                return 0;
            }
            cc = 1;
            for(int j = 0; j<v.size(); j++)
            {
                if(v[j]==x2 && j!=x1)
                    cc++;
            }
            if(cc==v.size()|| cc==1)
            {
                cout<<i+1<<endl;
                return 0;
            }

        }
    }
}
