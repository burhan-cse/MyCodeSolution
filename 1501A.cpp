#include<bits/stdc++.h>
using namespace std;

struct Node{
    int a, b, c;
};

int main()
{
    int t, n, a, b, x;
    Node ar[101];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i = 0; i<n; i++)
        {
            cin>>a>>b;
            ar[i].a = a;
            ar[i].b = b;
            ar[i].c = (b-a+1)/2;
        }
        int ans = ar[0].a;
        for(int i = 0; i<n-1; i++)
        {
            cin>>x;
            ans = max((ans+x+ar[i].c), ar[i].b);
            ans+=(ar[i+1].a- ar[i].b);
        }
        cin>>x;
        cout<<ans+x<<endl;

    }

}
