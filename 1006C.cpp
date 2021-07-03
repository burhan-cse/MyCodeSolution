#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
#ifdef pp
    //  freopen("in.txt" , "rt" , stdin);
    //  freopen("out.txt", "wt", stdout);
#endif // pp
    ll n, sum1 = 0, sum2 = 0, mx = 0;
    cin>>n;
    int ar[n+2];
    for(int i = 0; i<n; i++)
        cin>>ar[i];
    int i = 0, j = n-1;
    while(i<=j)
    {

        if(sum1>sum2)
        {
            sum2+=ar[j];
            j--;
        }
        else
        {
            sum1+=ar[i];
                  i++;
        }
        if(sum1==sum2)
            mx = max(mx, sum1);

    }
    cout<<mx<<endl;

}
