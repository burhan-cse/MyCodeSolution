#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int>mp;
    int n;
    string s;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        int ck = 0, c = 0,c1;
        cin>>s;
        sort(s.begin(),s.end());
        for(int i = 1; i<s.size(); i++)
        {
            if(s[i]-s[i-1]!=1)
            {
                cout<<"No"<<endl;
                ck = 1;
                break;
            }
        }
        if(ck==0)
            cout<<"Yes"<<endl;

    }
}
