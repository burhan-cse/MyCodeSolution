#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    #ifdef pp
        //freopen("in.txt", "rt", stdin);
       // freopen("out.txt","wt", stdout);
    #endif // pp


    ll n, x, i, sum = 0, sum1 = 0;
    cin>>n;
    ll ar[n+2], arr[n+2];
    for(int i = 0; i<n; i++){
        cin>>ar[i];
        sum+=ar[i];
    }
    for(int i = 0; i<n;i++){
            cin>>arr[i];
        sum1+=arr[i];
    }
    if(sum>=sum1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
