#include<bits/stdc++.h>


#define ll long long

#define sl(n) scanf("%lld", &n)
#define ss(n) scanf("%s", n)
#define sf(n) scanf("%lf", &n)

#define PI 3.141592653589
#define INF (1LL<<62)

#define pll pair<ll,ll>

#define eps 1e-9
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define srt(v) sort(v.begin(), v.end())
using namespace std;

#define gc getchar
int read_int() {
	char c = gc();
	while (c<'0' || c>'9') c = gc();
	int ret = 0;
	while (c >= '0' && c <= '9') {
		ret = 10 * ret + c - 48;
		c = gc();
	}
	return ret;
}

#define nsz 100000

vector <ll> nums[7];
vector <ll> csum[7];

ll ksum(ll l, ll r, ll k) {
//	cout << "ksum " << l << " " << r << " " << k << endl;
	ll sum = 0;
	for (ll i = 0; i <= 6 && k; i++) {
		ll lpos = lower_bound(nums[i].begin(), nums[i].end(), l) - nums[i].begin();
		ll rpos = upper_bound(nums[i].begin(), nums[i].end(), r) - nums[i].begin() - 1;
		if (lpos <= rpos) {
			rpos = min(rpos, lpos + k - 1);
			sum += csum[i][rpos];
			if (lpos) sum -= csum[i][lpos - 1];
			k -= rpos - lpos + 1;

	//		cout << i << " " << lpos << " " << rpos << " " << k << " " << sum << endl;
		}
	}
	return sum;
}

int main()
{
//	freopen("sample_input.txt", "r", stdin);
	//	freopen("IO/sample_output.txt", "w", stdout);

	ll i, j, k, x, y, ts, cs, z, q, typ, t, v, c, m, n, u, l, r;

	sl(ts);
	assert(1 <= ts && ts <= 2e5);

	for (i = 1; i <= nsz; i++) {
		ll cnt = 0;
		ll temp = i;
		for (j = 2; j*j <= i; j++) {
			if (temp % j == 0) {
				cnt++;
			}
			while (temp % j == 0) {
				temp /= j;
			}
		}

		if (temp != 1) cnt++;

		nums[cnt].push_back(i);
	}

	for (i = 0; i <= 6; i++) {
		for (j = 0; j < nums[i].size(); j++) {
			csum[i].push_back(nums[i][j]);
			if (j) csum[i][j] += csum[i][j - 1];
		}
	//	cout << i << " " << nums[i].size() << " " << csum[i].size() << endl;
	}

	for (cs = 1; cs <= ts; cs++) {
		sl(n);
		sl(x);
		sl(l);
		sl(r);

		assert(1 <= n && n <= nsz);
		assert(1 <= x && x <= nsz);
		assert(n + x - 1 <= nsz);
		assert(1 <= l && l <= r && r <= n);

		ll ans = ksum(x, x + n - 1, r) - ksum(x, x + n - 1, l - 1);

		printf("%lld\n", ans);
	}

	return 0;
}

