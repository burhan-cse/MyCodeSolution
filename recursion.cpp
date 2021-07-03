#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n<=1)
        return n;
    int x =  n+sum(n-1);
    cout<<x<<endl;
    return x;
}

int gcd(int n, int m)
{
    if(n%m==0) return m;
    cout<<gcd(m, n%m)<<endl;;
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<sum(n)<<endl;

    cout<<endl<<gcd(n, m)<<endl;
}
