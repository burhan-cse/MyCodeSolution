#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin>>n;
    int arr[n+2];
    vector<int>v;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
        v.push_back(arr[i]);

    }
    sort(v.begin(), v.end());
    for(int i = 0, j = 1; i<n && j<n;)
    {
        if(v[i]<v[j])i++, j++, cnt++;
        else j++;
    }
    cout<<cnt<<endl;
}
