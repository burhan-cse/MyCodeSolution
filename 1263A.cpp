#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, temp;
    scanf("%d", &t);
    while(t--)
    {
        int sum = 0;
        scanf("%d%d%d", &a, &b, &c);
        if(a<=b && a<=c)
        {
            sum = a;
            if(b<c)
            {
                b-=(a/2);
                c-=((a+1)/2);
                if(b<c)
                    sum+=b;
                else
                    sum+=c;
            }
            else
            {
                 b-=((a+1)/2);
                c-=(a/2);
                if(b<c)
                    sum+=b;
                else
                    sum+=c;
            }
        }
        else if(b<=a && b<=c)
        {
            sum = b;
            if(a<c)
            {
                a-=(b/2);
                c-=((b+1)/2);
                if(a<c)
                    sum+=a;
                else
                    sum+=c;
            }
            else
            {
                a-=((b+1)/2);
                c-=(b/2);
                if(a<c)
                    sum+=a;
                else
                    sum+=c;
            }
        }
        else
        {
            sum+=c;
            if(a<b)
            {
                a-=(c/2);
                b-=((c+1)/2);
                if(a<b)
                    sum+=a;
                else
                    sum+=b;
            }
            else
            {
                b-=(c/2);
                a-=((c+1)/2);
                if(a<b)
                    sum+=a;
                else
                    sum+=b;
            }
        }
        printf("%d\n", sum);
    }
}
