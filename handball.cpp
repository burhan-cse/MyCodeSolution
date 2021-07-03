#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, c;
    while(scanf("%d%d", &n, &m)==2){
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            c =0;
            for(int j = 0; j<m; j++)
            {
                scanf("%d", &x);
                if(x==0)
                    c = 1;
            }
            if(c==0)
                cnt++;
        }
        printf("%d\n", cnt);
    }
}
