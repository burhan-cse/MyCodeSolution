#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    #ifdef pp
       // freopen("in.txt", "rt", stdin);
       // freopen("out.txt","wt", stdout);
    #endif // pp


    int n, x, xx, z = 0;
    map<int , int>mp, mp1;
    cin>>n>>x;
    int ar[n+2];
    for(int i = 0; i<n; i++){
        cin>>ar[i];
        if(mp[ar[i]])
        {
            cout<<0<<endl;
            return 0;
        }
        mp[ar[i]]++;
    }
    for(int i = 0; i<n; i++)
    {
        xx = ar[i]&x;

        if(mp[xx] && xx!= ar[i])
        {
            cout<<1<<endl;
            return 0;
        }
        if(mp1[xx])
        {
            cout<<2<<endl;
            return 0;
        }

       mp1[xx]++;
    }
    cout<<-1<<endl;
}
