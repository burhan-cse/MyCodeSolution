#include<bits/stdc++.h>
using namespace std;
int ar[105];

int main()
{
    int n;
    cin>>n;
    int arr[n+2]
    string s;
    cin>>s;
    for(int i = 1; i<=n;i++){
        arr[i] = s[i-1]-'0';
        ar[i]+=(ar[i-1]+arr[i]);
    }
    for(int i = 1; i<=n; i++)
    {
        for(int j = i+1; j<=n; j++)
        {
           for(int k = j+1; k<=n; k++)
           {
               if(ar[i]==(ar[j]-ar[i])&& ar[])
           }
        }
    }
}
