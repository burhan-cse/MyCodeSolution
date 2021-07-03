#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, n, a, cnt;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        cnt  = 0;
        for(int i = 0; i<n; i++)
        {
            cin>>a;
            if(a%2) cnt++;
        }
        if(cnt==0)
            cout<<"NO"<<endl;
        else if(n==x && cnt%2==0)
            cout<<"NO"<<endl;
        else if(n==cnt && x%2==0)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
