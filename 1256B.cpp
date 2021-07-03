#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, pos = 1;
        cin>>n;
        int arr[n+2];
        for(int i = 1; i<=n; i++)
        {
            cin>>arr[i];
        }
        int i = 1, j = 1, mn;
        int x;
        while(i < n)
        {
            x = 0;
            mn = arr[i];
            pos = i;
            for(j = i+1; j<=n; j++)
            {
                if(mn>arr[j])
                {
                    mn = arr[j];
                    pos = j;
                }
            }
            while(pos>i)
            {
                arr[pos] = arr[pos-1];
                x++;
                pos--;
            }
            if(x==0)
                i++;
            else
            {
            arr[i] = mn;
            i+=x;
            }

        }
        for(i = 1; i<=n; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}
