#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, s, d, ti = 999999, ind;
    cin>>n>>k;
    for(int i = 1; i<=n; i++)
    {
        cin>>s>>d;
        if(s>=k)
        {
            if(ti>s)
                ti = s, ind = i;
        }
        else
        {
            int x = k - s;
            x = x/d;
            x = x*d +s;
            while(x<k)
                x+=d;
            if(ti>x)
                ti = x, ind = i;
        }
    }
    printf("%d\n", ind);
}
