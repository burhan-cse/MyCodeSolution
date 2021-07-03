#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //freopen("1256D.txt","r", stdin);
    ll n, k;
    int t, i, j, pos;
    string s;
    cin>>t;
    while(t--)
    {
        pos = 0;
        cin>>n>>k>>s;
        for(i = 0; i<n; i++)
        {
            if(s[i]=='0')
            {
                if(k>=(i-pos))
                {
                    k-=(i-pos);
                    pos++;
                }
                else{
                    k = i-k;
                    break;
                }
            }
        }
        if(i==n)
        {
            for(i=0; i<pos ; i++) cout<<0;
            for(;i<n; i++)cout<<1;
        }
        else
        {
            for(j=0; j<pos; j++)cout<<0;
            for(; j<k;j++)cout<<1;
            cout<<0;
            for(j++;j<=i; j++)cout<<1;
            for(;j<n;j++)cout<<s[j];

        }
        cout<<endl;
    }

}
