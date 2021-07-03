#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>d;
        if(a>b) swap(a,b);
        d++;
        if(a*d<b) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}



/*

3  2

1 2
1 2
1 2

*/
