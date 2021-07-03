#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+2], odd = 0, even = 0, io = n-1, iz = n-1;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    sort(arr,arr+n);
    while(odd>0 && even>0)
    {
        while(1)
        {
            if(arr[io]%2==1 &&arr[io] !=-1)
            {
                arr[io] = -1;
                io--;
                break;
            }
            io--;
        }
        while(1)
        {
            if(arr[iz]%2==0 &&arr[iz] !=-1)
            {
                arr[iz] = -1;
                iz--;
                break;
            }
            iz--;
        }
        odd--, even--;
    }
    if(odd>0)
    {
        while(1)
        {
            if(arr[io]%2==1 &&arr[io] !=-1)
            {
                arr[io] = -1;
                io--;
                break;
            }
            io--;
        }
    }
    if(even>0)
    {
         while(1)
        {
            if(arr[iz]%2==0 && arr[iz] !=-1)
            {
                arr[iz] = -1;
                iz--;
                break;
            }
            iz--;
        }
    }
    int sum = 0;
    for(int i = 0; i<n;i++)
    {

        if(arr[i]!=-1)
            sum+=arr[i];
    }
    cout<<sum<<endl;
}
