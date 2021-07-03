#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ar[29],ar1[29], c = 0;
        for(int i = 0; i<=26; i++) ar1[i] = 0, ar[i] = 0;
        string s, t, p;
        cin>>s>>t>>p;
        for(int i = 0; i<t.size(); i++)
            ar[t[i]-'a']++;
        for(int i = 0; i<s.size(); i++)
            ar1[s[i]-'a']++;
        for(int i = 0; i<p.size(); i++)
            ar1[p[i]-'a']++;
        for(int i = 0; i<26; i++)
        {
            cout<<ar[i]
            if(ar[i]>ar1[i])
                c = 1;
        }
        if(c)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
