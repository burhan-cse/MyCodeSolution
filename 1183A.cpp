#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(1)
    {
        int sum = 0, x = n;
        while(x)
        {
            sum+=(x%10);
            x/=10;
        }
        if(sum%4==0){
            cout<<n<<endl;
            return 0;
        }
        n++;

    }
}
