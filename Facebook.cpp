#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, te=1, x, y, tmin;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>x>>c>>y;
        tmin = x*60+y;
        tmin-=2250;
        //cout<<x<<" "<<y<<" "<<tmin<<endl;
        cout<<"Case "<<te++<<": ";
        if(tmin<30 || tmin%30)
        {
            cout<<"NOT POSSIBLE"<<endl;
        }
        else
        {
            tmin/=30;
            cout<<tmin/60<<":"<<tmin%60<<endl;
        }
    }
}
