#include<bits/stdc++.h>
using namespace std;

bool prime[1000000];

void seive()
{
    prime[0] = prime[1] = 1;
    for(int i = 2; i*i<=1000000; i++)
    {
        if(prime[i]==0)
        {
            for(int j = i+i; j<=1000000; j+=i)
                prime[i] = 1;
        }
    }
}

int main()
{
    seive();
}
