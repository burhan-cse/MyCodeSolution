#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int len;
        string s;
        cin>>len>>s;
        for(int i = 0; i<len; i++)
        {
            if(s[i]=='2' || s[i]=='1')
                cout<<1;
            else cout<<0;
        }
        cout<<endl;
        for(int i = 0; i<len; i++)
        {
            if(s[i]=='2')
                cout<<1;
            else
                cout<<0;
        }
        cout<<endl;
    }
}
