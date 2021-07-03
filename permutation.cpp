#include<stdio.h>

int used[100], number[100];

void per(int at, int n)
{
    if(at==n+1)
    {
        for(int i =1; i<=n; i++)
            printf("%d ", number[i]);
        printf("\n");
        return;
    }
    for(int i = 1; i<=n; i++)
    {
        if(used[i]==0)
        {
            used[i] =1;
            number[at] = i;
            per(at+1, n);
            used[i] = 0;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    per(1,n);
}
