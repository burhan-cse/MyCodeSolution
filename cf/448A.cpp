#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f, n, x, y;
    cin>>a>>b>>c>>d>>e>>f>>n;
    x = (a+b+c+4)/5;
    y = (d+e+f+9)/10;
    if(n>=x+y)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
