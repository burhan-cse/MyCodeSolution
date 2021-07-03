#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,t,cnt = 0;
    cin>>n>>s>>t;
    int ar[n+2];
    for(int i = 1; i<=n; i++)
    {
        cin>>ar[i];
    }
    while(s!=t && cnt<n)
    {
        s = ar[s];
        cnt++;
    }
    if(s==t)cout<<cnt<<endl;
    else cout<<-1<<endl;
}
