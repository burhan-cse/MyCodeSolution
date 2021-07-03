#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int q;
    cin>>q;
    while(q--){
        ll k, n, a, b;
        cin>>k>>n>>a>>b;
        if(n*b<k)
        {
            ll start = 0, finish = n;
            while(start<finish)
            {
                ll mid = (start+finish)/2;
                if(start==finish)
                {
                    cout<<finish<<endl;
                    break;
                }else if(start*a+(n-start*b)<k)
                start = mid+1;
                else
                    finish = mid-1;
            }
        }else
        cout<<-1<<endl;
    }
}
