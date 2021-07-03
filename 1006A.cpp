#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    #ifdef pp
      //  freopen("in.txt" , "rt" , stdin);
      //  freopen("out.txt", "wt", stdout);
    #endif // pp
    ll n;
    cin>>n;
    for(int i = 0; i<n;i++)
    {
        cin>>x;
        if(x%2==0) x--;
        cout<<x<<" ";
    }

}

