#include<bits/stdc++.h>
using namespace std;
int ar[27], a[27];
int main()
{
    int t, te=1, ck = 0;
    string s, s1;
    char c;
    cin>>t;
    getchar();
    while(t--)
    {
        ck = 0;

        getline(cin, s);
        cout<<"Case "<<te++<<": ";
        for(int i = 0;i<s.size(); i++)
        {
            if(s[i]==' ')continue;
            c = tolower(s[i]);
            int x = c-'a';

            a[x]++;
        }
        getline(cin, s);
        for(int i = 0;i<s.size(); i++)
        {
            if(s[i]==' ')continue;
            c = tolower(s[i]);
            int x = c-'a';

            ar[x]++;
        }
        for(int i = 0; i<26; i++)
        {
            if(ar[i]!=a[i])ck = 1;
            ar[i] = a[i] = 0;
        }

        if(ck)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }

}
