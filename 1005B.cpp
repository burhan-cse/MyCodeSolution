#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    string s, s1;
    cin>>s>>s1;

    for(i =s.size()-1, j = s1.size()-1; i>=0 && j>=0; i--, j--)
    {
        if(s[i]!=s1[j])
        {
            break;
        }
    }
   cout<<i+j+2<<endl;
}
