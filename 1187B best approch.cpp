#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    string s;
    vector<int> v[26];
    cin>>n>>s;
    for(int i = 0; i<n; i++)
        v[s[i]-'a'].push_back(i+1);
    cin>>t;
    while(t--)
    {
        cin>>s;
        int cnt[27];
        for(int i = 0; i<26; i++)
            cnt[i] = 0;
        for(int i = 0; i<s.size(); i++)
            cnt[s[i]-'a']++;
        n = -1;
        for(int i = 0; i<26; i++)
        {
            if(cnt[i]>0)
                n = max(n, v[i][cnt[i]-1]);
        }
        cout<<n<<endl;
    }
}
