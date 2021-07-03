#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, mxi = 0, mxj =0, posi, posj;
        cin>>n>>m;
        string s[n+2];
        int ar[m+2], arr[n+2];
        for(int i = 0; i<n; i++) arr[i] = 0;
        for(int i = 0; i<m; i++) ar[i] = 0;
        for(int i = 0; i<n; i++)
        {
            cin>>s[i];
            for(int j = 0; j<m; j++)
            {
                if(s[i][j]=='*'){
                    arr[i]++;
                    if(mxi<arr[i])
                    {
                        mxi = arr[i];
                        posi = i;
                    }
                    if(mxj<ar[j])
                    {
                        mxj = ar[j];
                        posj = j;
                    }               }
            }
        }
        cout<<(n-mxi)+(m-mxj)<<endl;
    }
}
