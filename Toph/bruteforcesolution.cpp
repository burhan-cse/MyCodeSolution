#include <bits/stdc++.h>
using namespace std;
const int MAX = 100001;
typedef long long ll;
vector<int> qsum[7], distinctPrimeCnt[7];
int ar[MAX+5];
void Solve() {
    for(int i=1; i<MAX; i++) {
        int num = i;
        int distinctPrime = 0;
        if(num % 2 == 0) {
            ++distinctPrime;
            while(num % 2 == 0) {
                num /= 2;
            }
        }
        for(int j=3; j<=sqrt(num); j+=2) {
            bool check = false;
            if(num % j == 0) {
                while(num % j == 0) {
                    num /= j;
                }
                check = true;
            }
            if(check) ++distinctPrime;
        }
        if(num > 2) ++distinctPrime;
        distinctPrimeCnt[distinctPrime].push_back(i);
        ar[i] = distinctPrime;
    }
    for(int i=0; i<7; i++){
        long long sum = 0;
        qsum[i].push_back(0);
        for(int j=0; j<distinctPrimeCnt[i].size(); j++){
            sum += distinctPrimeCnt[i][j];
            qsum[i].push_back(sum);
        }
    }
}
int main() {
    Solve();

    //freopen("input05.txt", "r", stdin);
    //freopen("output05.txt", "w", stdout);
    int t; cin>>t;
    while(t--) {
        long long sum = 0;
        vector< pair< int, int> > ans;
        int N, X, L, R;
        cin>>N>>X>>L>>R;
        for(int i=X; i<X+N; i++)
        {
            ans.push_back({ar[i], i});
        }
        sort(ans.begin(), ans.end());
        for(int i = L; i<=R; i++)
        {
            //cout<<ans[i-1].second<<" ";
            sum+=ans[i-1].second;
        }
        cout<<sum<<endl;
    }
    return 0;
}

