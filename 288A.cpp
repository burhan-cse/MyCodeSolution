#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    if(m>n|| (m==1 && n>1))
    {
        cout<<-1<<endl;
    }
    else if(m==n)
    {
        for(int i=0; i<n; i++)
            cout<<char (i+'a');
    }
    else
    {
        m-=2;
        for(int i = 0; i<n-m; i++)
        {
            if(i%2==0)cout<<'a';
            else cout<<'b';
        }
        for(int i = 0; i<m; i++) cout<<char (i+'c');
    }
}
