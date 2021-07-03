#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, m;
    string s;
    cin>>n>>s;
    int ar[n+2][30];
    for(int i = 0; i<=n; i++)
    {
        for(int j = 0; j<26; j++)
            ar[i][j] = 0;
    }
    for(int i = 1; i<=n; i++)
    {
        x = s[i-1]-'a';
        for(int j = 0; j<26; j++)
        {
            if(j==x)
                ar[i][j] = ar[i-1][j]+1;
            else
                ar[i][j] = ar[i-1][j];
        }
    }
    cin>>m;
    while(m--)
    {
        int arr[30], sz;
        for(int  i = 0; i<26; i++)
            arr[i] = 0;

        cin>>s;
        sz = s.size();
        for(int i = 0; i<sz; i++)
        {
            arr[s[i]-'a']++;
        }
        int start = sz, end = n, mid, ck;
        mid = (start+end)/2;
        while(start<end)
        {
            ck = 0;
            for(int i = 0; i<26; i++)
            {
                if(ar[mid][i]<arr[i])
                    ck = 1;
            }
            if(ck)
                start = mid+1;
            else
                end = mid;

            mid = (start+end)/2;
        }
        cout<<mid<<endl;
    }
}
