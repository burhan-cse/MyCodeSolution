#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, cnt = -1, temp = 0, last, dig;
        cin>>n;
        int ar[11];
        while(n)
        {
            cnt++;
            ar[cnt] = n%10;
            n/=10;
        }
        int ans = (cnt*9)+ar[cnt];
        while(cnt>0)
        {
            if(ar[cnt]>ar[cnt-1])
            {
                ans--;
                break;
            }
            else if(ar[cnt]<ar[cnt-1])
            {
                break;
            }
            cnt--;
        }
        cout<<ans<<endl;
    }
}
