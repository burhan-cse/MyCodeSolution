#include <bits/stdc++.h>
using namespace std;
const int MAX = 100001;
typedef long long ll;
vector<int> qsum[7], distinctPrimeCnt[7];
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

    freopen("input16.txt", "r", stdin);
    freopen("output16.txt", "w", stdout);
    int t; cin>>t;
    while(t--) {
        int N, X, L, R;
        cin>>N>>X>>L>>R;
        int totalCnt = 0;
        ll ans = 0;
        for(int i=0; i<7; i++) {
            int lo = lower_bound(distinctPrimeCnt[i].begin(), distinctPrimeCnt[i].end(), X) - distinctPrimeCnt[i].begin();
            int hi = upper_bound(distinctPrimeCnt[i].begin(), distinctPrimeCnt[i].end(), X+N-1) - distinctPrimeCnt[i].begin();
            if(distinctPrimeCnt[i].size() <= hi) hi--;
            else if(distinctPrimeCnt[i][hi] > X+N-1) hi--;
            int number = hi - lo + 1;
            if(L <= totalCnt + number) {
                int lp = lo + (L - totalCnt - 1);
                int hp = min(hi, lp + (R - L));
                int collectedNumber = hp - lp;
                ans += qsum[i][hp+1] - qsum[i][lp];
                L += hp - lp + 1;
            }
            totalCnt += number;
            if(L > R) break;
        }
        cout << ans << endl;
    }
    return 0;
}
