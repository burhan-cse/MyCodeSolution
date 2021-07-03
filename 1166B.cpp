#include<bits/stdc++.h>
using namespace std;

char s[7][7];


int main()
{
    s[0][0] = 'a';
    s[0][1] = 'e';
    s[0][2] = 'i';
    s[0][3] = 'o';
    s[0][4] = 'u';
    s[1][0] = 'e';
    s[1][1] = 'i';
    s[1][2] = 'o';
    s[1][3] = 'u';
    s[1][4] = 'a';
    s[2][0] = 'i';
    s[2][1] = 'o';
    s[2][2] = 'u';
    s[2][3] = 'a';
    s[2][4] = 'e';
    s[3][0] = 'o';
    s[3][1] = 'u';
    s[3][2] = 'a';
    s[3][3] = 'e';
    s[3][4] = 'i';
    s[4][0] = 'u';
    s[4][1] = 'a';
    s[4][2] = 'e';
    s[4][3] = 'i';
    s[4][4] = 'o';
    int n;
    cin>>n;
    if(n<25)
        cout<<-1<<endl;
    else
    {
        for(int i = 5; i<n; i++)
        {
            for(int j = 5; j<n; j++)
            {
                if(i*j>n)
                    break;
                if(i*j==n)
                {
                    for(int ii = 0; ii<i; ii++)
                    {
                        for(int jj = 0; jj<j; jj++)
                        {
                            cout<<s[ii%5][jj%5];
                        }

                    }
                    return 0;
                }
            }
        }
        cout<<-1<<endl;
    }
}
