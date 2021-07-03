#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0; i<n; i++)
    {
        if(s[i]=='0')
        {
            if(cnt==0)
            {
                cout<<0;
            }
            else
            {
                cout<<cnt;
                cnt = 0;
            }
        }
        else
        {

            cnt++;

        }
    }
    if(cnt>0)
        cout<<cnt;
    else if(cnt==0 && s[n-1]=='0')cout<<0;
}
