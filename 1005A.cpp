#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin>>n>>x;
    vector<int>v;
    for(int i = 1; i<n; i++)
    {
        cin>>y;
        if(x+1!=y)
            v.push_back(x);
        x = y;
    }
    v.push_back(x);
    cout<<v.size()<<endl;
    for(int i = 0; i<v.size(); i++) cout<<v[i]<<" ";
}
