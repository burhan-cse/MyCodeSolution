#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m, ans, x, y;
    cin>>n>>m;
    if(m<n)
        swap(n,m);

    if(n==1)
    {
        ans = (m+1)/3;
    }
    else if(n==2)
        ans = (m+1)/2;
    else if(n==3)
        ans = ((m+2)/3)*2;
    else
    {
        x = (m+1)/5;
        x+=(m+4)/5;
        y = (n+1)/5;
        y+=(n+4)/5;
        ans = x*y;


    }

    cout<<ans<<endl;
}

