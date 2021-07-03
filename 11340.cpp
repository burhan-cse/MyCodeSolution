#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, x, sz, sum;
    double val;
    char c;
    string s;
    cin>>n;
    while(n--)
    {
        sum = 0;
        map<char, double>mp;
        cin>>x;
        while(x--)
        {
            cin>>c>>val;
            mp[c] = val;

        }
        cin>>x;
        getchar();
        while(x--)
        {
            getline(cin, s);
            sz = s.size();
            for(int i = 0; i<sz; i++)
                sum+=mp[s[i]];
        }
        val = sum%100;
        sum = sum/100;
        cout<<sum<<"."<<val<<"$"<<endl;
    }
}
