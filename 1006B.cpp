#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[3000], ar[3000];
pair<int, int>a[3000];

int main()
{
#ifdef pp
    //  freopen("in.txt" , "rt" , stdin);
    //  freopen("out.txt", "wt", stdout);
#endif // pp
    ll n, k;
    cin>>n>>k;

    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
        for(int j = 0; j<k; j++)
        {
            if(arr[i]>a[j].second)
            {
                for(int jj = k-1; jj>j; jj--)
                    a[jj] = a[jj-1];
                a[j].first = i+1, a[j].second = arr[i];
                break;
            }
        }
    }
    ll sum = 0;
    sort(a, a+k);
    for(int i = 0; i<k; i++)
    {
        sum+=a[i].second;
    }
    cout<<sum<<endl;
    if(k==1)
    {
        cout<<n<<endl;
        return 0 ;
    }
    else cout<<a[0].first<<" ";
    for(int i = 1; i<k ; i++)
    {
        if(i==k-1)
        {
            cout<<n-a[k-2].first;
        }
        else
            cout<<(a[i].first-a[i-1].first)<<" ";
    }


}
