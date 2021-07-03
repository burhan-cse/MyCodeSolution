#include<bits/stdc++.h>
using namespace std;
bool ck(int x)
{
    while(x)
    {
        if(x%10==7)
            return 1;
        x/=10;
    }
    return 0;
}

int main()
{
    int n, x, y, cnt = 0;
    cin>>n>>x>>y;
    while(1)
    {
        if(ck(x)||ck(y))
        {
            cout<<cnt<<endl;
            return 0;
        }
        y-=n;
        if(x==0)
            x = 24;
        if(y<0)
        {
            y = 60+y;
            x--;

        }
        cnt++;
    }
}
