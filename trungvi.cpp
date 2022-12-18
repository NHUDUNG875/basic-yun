#include <bits/stdc++.h>
#define f1(i, n) for(int i=1; i<=n; ++i)
#define f0(i, n) for(int i=0; i<n; ++i)
using namespace std;
using ll = long long;
int main(){
	// freopen("central.inp","r",stdin);
	// freopen("central.out","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, k; cin >> n >> k;
	int d[n];
	ll sum=0;
	double ans=0;
	f1(i, n) cin >> d[i], sum+=d[i];
	f1(i, n) ans+=pow(abs(d[i]-sum/n), k);
	cout << fixed << setprecision(2) << ans;
	return 0;
}