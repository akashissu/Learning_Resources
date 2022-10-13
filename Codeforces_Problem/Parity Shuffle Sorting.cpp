#include <bits/stdc++.h>
#define ll long long
#define all(c) c.begin(),c.end()
#define FAST ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define f first
#define s second
#define pb push_back
#define pf push_front
#define inf 1e18
#define inq -1e18
const ll mod = 1000000007;
const ll h = 998244353;
#define rep(i,n,m) for (int i = n; i >= m; i--)
using namespace std;

void solve() {
	ll n;
	cin >> n;
	vector<ll>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	cout << n-1 << endl;
	if (n > 1) cout << "1 " << n << endl;
	if ((v[0] + v[n - 1]) % 2 == 0) v[0] = v[n - 1];
	else v[n - 1] = v[0];
	for (int i = 1; i < n-1; ++i)
	{
		if ((v[0] + v[i]) % 2 == 0) {
			cout << i + 1 << " " << n << endl;
		}
		else {
			cout << 1 << " " << i + 1 << endl;
		}
	}
}

signed main()
{
	FAST
	//fstream in("a.txt",ios::in);
	//fstream out("ans.txt",ios::out);
	int T = 1, p = 1;
	cin >> T;
	while (T--) {
		solve();
		//cout<<"Case #"<<p<<": "<<ans<<endl;
	}
	return 0;
}
