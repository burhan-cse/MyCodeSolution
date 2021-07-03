#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, sum = 0;
    cin>>n>>a>>b;
    int arr[n+2];
    for(int i = 0; i<n ; i++)
        cin>>arr[i];
    for(int i = 0, j = n-1; i<n/2; i++, j--)
    {
        if(arr[i]==arr[j] && arr[i]==2)
            sum+=(min(a,b)*2);
        else if(arr[i]==2)
        {
            if(arr[j]==0) sum+=a;
            else sum+=b;
        }
        else if(arr[j]==2)
        {
            if(arr[i]==0)sum+=a;
            else sum+=b;
        }
        else if(arr[i]!=arr[j])
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    if(n%2==1 && arr[n/2]==2)
        sum+=min(a,b);

    cout<<sum<<endl;
}
