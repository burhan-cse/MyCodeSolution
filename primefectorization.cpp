#include<bits/stdc++.h>
using namespace std;
int prime[100009];

vector<int>v;
map<int, int>mp;
map<int, int>::iterator it;
void prim()
{
    prime[1] = 1;
    for(int i = 4; i<=100000; i+=2)
        prime[i] = 1;
    for(int i = 3; i*i<=100000; i+=2)
    {
        if(prime[i]==0)
        {
            for(int j  = i*i; j<=100000; j+=i)
                prime[j] = 1;
        }
    }
    v.push_back(2);
    for(int i =3; i<=100000; i+=2)
    {
        if(prime[i]==0)
            v.push_back(i);

    }
}

void pfecto(int n)
{
    for(int i = 0; v[i]*v[i]<=n; i++)
    {
        while(n%v[i]==0)
        {

            //cout<<v[i]<<" ";
            n/=v[i];
            mp[v[i]]++;
        }
    }
    if(n>1){
        //cout<<n;
        mp[n]++;
    }
}

int main()
{
    prim();
    int n;
    while(cin>>n)
    {
        mp.clear();
        pfecto(n);
        for(it = mp.begin(); it!=mp.end(); ++it)
            cout<<it->first<<" ("<<it->second<<")"<<endl;
    }


}
