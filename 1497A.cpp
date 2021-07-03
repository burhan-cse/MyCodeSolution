#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t, n, ar[101], x;
    cin>>t;
    while(t--)
    {
        for(int i =0; i<101; i++) ar[i] = 0;
        cin>>n;
        vector<int> v, v1;
        for(int i = 0; i<n; i++)
        {
            cin>>x;
            if(ar[x]) v1.push_back(x);
            else v.push_back(x);
            ar[x] =1;
        }
        sort(v.begin(), v.end());
        for(int i = 0; i<v.size(); i++) cout<<v[i]<<" ";
        for(int i = 0; i<v1.size(); i++) cout<<v1[i]<<" ";
        cout<<endl;
    }
}
