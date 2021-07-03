#include<bits/stdc++.h>
using namespace std;
int ar[200009];
int main()
{
    vector<int>v, v1;
    int n, ck =0;
    cin>>n;

    int arr[n+2];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int i = 0;i<n;i++)
    {
        ar[arr[i]]++;
        if(ar[arr[i]]==1)
        {
            v1.push_back(arr[i]);
        }
        else if(ar[arr[i]]==2)
        {
            v.push_back(arr[i]);

        }
        else
        {
            cout<<"NO"<<endl;
            ck =1;
            break;
        }


    }
    if(ck==0)
    {
        cout<<"YES"<<endl;
        cout<<v1.size()<<endl;
        for(int i = 0; i<v1.size(); i++)
            cout<<v1[i]<<" ";
        cout<<endl<<v.size()<<endl;
        for(int i = v.size()-1; i>=0; i--)
            cout<<v[i]<<" ";
    }
}
