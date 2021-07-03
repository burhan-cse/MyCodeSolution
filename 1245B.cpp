#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, a, b, c, len, aa = 0, bb = 0, cc = 0;
        string s, str="";
        cin>>n>>a>>b>>c>>s;
        for(int i = 0; i<n; i++)
        {
            if(s[i]=='R')
                aa++;
            else if(s[i]=='P')
                bb++;
            else
                cc++;
        }
        len = min(b, aa)+min(c,bb)+min(a, cc);
        //cout<<a<<" "<<aa<<" "<<b<<" "<<bb<<" "<<c<<" "<<cc<<" "<<len<<endl;
        if(len<((n+1)/2))
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i = 0; i<n; i++)
            {
                if(s[i]=='R' && b)
                {
                    b--;
                    str+='P';
                }
                else if(s[i]=='P' && c)
                {
                    c--;
                    str +='S';
                }
                else if(s[i]=='S' && a)
                {
                    a--;
                    str += 'R';
                }
                else
                    str+='a';
            }
            for(int i=0; i<n; i++)
            {
                if(str[i]=='a')
                {
                    if(a)
                    {
                        a--;
                        str[i] = 'R';
                    }
                    else if(b)
                    {
                        b--;
                        str[i] = 'P';
                    }
                    else
                    {
                        c--;
                        str[i] = 'S';
                    }
                }
            }
            cout<<str<<endl;
        }
    }
}

/*
10
9
9
0
0
SSRPSRSPS
*/
