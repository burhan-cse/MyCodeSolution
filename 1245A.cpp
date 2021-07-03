#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, ans;
        cin>>a>>b;
        ans = __gcd(a,b);
        if(ans!=1)
        {
            cout<<"Infinite"<<endl;
        }
        else
        {

            cout<<"Finite"<<endl;
        }
    }
}
