#include<bits/stdc++.h>
using namespace std;
int ar[30];
int main()
{
    int n, sum = 0, x;
    string s;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>s;
        ar[s[0]-'a']++;
    }
    for(int i = 0; i<26; i++)
    {
        x = ar[i]/2;
        sum+=((x*(x-1)/2));
        x = ar[i]-x;
        sum+=((x*(x-1)/2));
    }
    cout<<sum<<endl;
}
