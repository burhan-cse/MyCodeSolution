#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    map<int, int>mp;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 1; i<=9; i++)
    {
        cin>>x;
        mp[i] = x;
    }
    int i = 0;
    while(mp[s[i]-'0']<=s[i]-'0' && i<n){
            cout<<s[i];
            i++;
    }
    while(mp[s[i]-'0']>=s[i]-'0' && i<n){
            cout<<mp[s[i]-'0'];
            i++;
    }
    while(i<n)
        cout<<s[i++];
}
