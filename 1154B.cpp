#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, ind = -1, c ;
    cin>>n;
    int ar[4];
    for(int i = 0; i<n; i++)
    {
        c = 0;
        cin>>x;
        for(int j = ind; j>=0; j--)
            if(ar[j]==x)
            {
                c =1;
                break;
            }
        if(c)
            continue;
        ar[++ind] = x;
        if(ind==3)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    if(ind==0)
    {
        cout<<0<<endl;
    }
    else if(ind==1)
    {
        cout<<abs(ar[0]-ar[1])<<endl;
    }
    else
    {
        if(ar[0]-ar[1]==ar[2]-ar[0])
            cout<<ar[0]-ar[1];
        else if(ar[1]-ar[0]==ar[2]-ar[1])
            cout<<ar[1]-ar[0];
        else if(ar[2]-ar[0]==ar[1]-ar[2])
            cout<<ar[2]-ar[0];
        else
            cout<<-1;


    }
}
