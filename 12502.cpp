#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double x, y, z, div, di = 3.0, d;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        div = (x+y)/di;
        if(x>div)
        {
            d = x-div;


            x = z/div;

            y = x*d;
            cout<<y<<endl;


        }
        else cout<<0<<endl;

    }
}
