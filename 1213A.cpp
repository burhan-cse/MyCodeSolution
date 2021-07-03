#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t, n, m, s, sum, x;
    cin>>t;
    while(t--)
    {
        int ar[12];
        s = 0;
        cin>>n>>m;
        for(int i =1; i<=10; i++){
            ar[i] = (m*i)%10;
            s+=ar[i];
        }
        x = n/m;
        sum = (x/10)*s;
        for(int i =1; i<=x%10; i++)
            sum+=ar[i];
        cout<<sum<<endl;
    }
}
