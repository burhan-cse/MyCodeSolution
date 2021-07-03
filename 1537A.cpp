#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
        }
        if (sum < n)
            cout << 1 << endl;
        else if (sum == n)
            cout << 0 << endl;
        else
            cout << sum - n << endl;
    }
}