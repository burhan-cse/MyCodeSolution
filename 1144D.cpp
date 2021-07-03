#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int>mp;
    int n, mx = 0, id , ind;
    cin>>n;
    int arr[n+2];
    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
        if(mx<=mp[arr[i]])
        {
            id = arr[i];
            ind=i;
            mx = mp[arr[i]];
        }
    }
    cout<<n-mx<<endl;
    for(int i = ind; i>0; i--)
    {
        if(arr[i-1]!=id)
        {
            if(arr[i-1]>id)
                cout<<2<<" "<<i<<" "<<i+1<<endl;
            else
                cout<<1<<" "<<i<<" "<<i+1<<endl;
        }
    }
    for(int i = ind; i<n-1; i++)
    {
        if(arr[i+1]!=id)
        {
            if(arr[i+1]>id)
                cout<<2<<" "<<i+1<<" "<<i+2<<endl;
            else
                cout<<1<<" "<<i+1<<" "<<i+2<<endl;
        }
    }
}
