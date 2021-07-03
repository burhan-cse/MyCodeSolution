#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, w, x = -1;
        string s;
        cin>>n>>w>>s;
        int ar[2][n+2];
        for(int i = 0; i<n; i++)
        {
            ar[0][i] = -1;
            ar[1][i] = -1;
        }
        for(int i = 0; i<n; i++)
        {
            if(s[i]=='1')
                ar[0][i] =  0;
            else if(i && ar[0][i-1]>=0)
                ar[0][i] = ar[0][i-1]+1;
        }
        for(int i = n-1; i>=0; i--)
        {
            if(s[i]=='1')
                ar[1][i] =  0;
            else if(i<n-1 && ar[1][i+1]>=0)
                ar[1][i] = ar[1][i+1]+1;
        }
        for(int i = 0; i<n; i++)
        {
            if(s[i]=='1')cout<<"1";
            else if(ar[0][i] != ar[1][i] && ((ar[0][i]<=w && ar[0][i] != -1) || (ar[1][i]<=w && ar[1][i] != -1 ))) cout<<"1";
            else cout<<"0";
        }
        cout<<endl;

    }
}