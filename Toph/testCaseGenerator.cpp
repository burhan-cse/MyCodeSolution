#include <bits/stdc++.h>

using namespace std;

int main() {
    srand(time(0));
    freopen("input16.txt", "w", stdout);
    printf("700\n");
    int i;
    for(i = 0; i < 700; i++) {
        int x = rand() % 100000 + 1 ;
        int n = rand() % (100000 - x + 1) + 1;
        int l = rand() % n + 1;
        int r = rand() % n + 1;
//		x = 1, n = 100000;
//		l = 1, r = 100000;
        if(l > r) swap(l,r);
//        if(n > 100000 || x > 100000 || x + n - 1 > 100000 || l > r || l > n || r - l + 1 > n || r > n){
//            i--;
//            continue;
//        }
        printf("%d %d %d %d\n",n, x, l, r );
    }
    return 0;
}
