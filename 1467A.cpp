#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1) cout<<9;
        else if(n==2)cout<<98;
        else{
            n-=3;
            cout<<989;
            for(int i = 0; i<n; i++) cout<<i%10;
        }
        cout<<endl;
    }
}
