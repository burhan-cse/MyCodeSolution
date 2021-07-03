#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("1253A.txt","r", stdin);
    int t, a, b, cnt;
    cin>>t;
    while(t--)
    {

        cin>>a>>b;
        long long x = abs(a-b);
        cnt = x/5;
        x = x%5;
        cnt += (x/2);
        x = x%2;
        cnt += x;
        cout<<cnt<<endl;
    }
}
