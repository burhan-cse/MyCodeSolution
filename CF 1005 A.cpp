#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    vector < int > v,ans ;
    for(int i = 0 ; i < n ; i++)
    {
        int a ;
        cin >> a ;
        v.push_back(a) ;
    }
    v.push_back(0) ;

    for(int i = 0 ; i < n ; i++)
    {
        if(v[i] >= v[i+1])
        {
            ans.push_back(v[i]) ;
        }
    }

    for(int i = 0 ; i < ans.size() ; i++)cout << ans[i] << " " ;
}
