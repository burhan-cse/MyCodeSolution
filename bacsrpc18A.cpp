#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, te = 1, n, x, y = -1, ck;
    cin>>t;
    while(t--)
    {
        ck = 0;
        cin>>n>>y;
        n--;
        while(n--)
        {
            cin>>x;
            if(x-y==1)ck = 1;
            y = x;
        }
        cout<<"Case "<<te++<<": ";
        if(ck)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
