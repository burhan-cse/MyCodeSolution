#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<string>st;
    string s;
    while(n--)
    {
        cin>>s;
        if(s=="0")continue;
        st.insert(s);
    }
    cout<<st.size()<<endl;
}
