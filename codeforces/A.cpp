#include <iostream>
#define f1(i, n) for(int i=1; i<=n; i++)
#define f0(i, n) for(int i=0; i<n; i++)
using namespace std;
using ll = long long;
const int N = 1e6+1;
const int mod = 1e9+7;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	int a[n];
	ll cnt[2] = {0};
	f0(i, n) cin >> a[i];
	int l = 0, r = n-1;
	f0(i, n)
		cnt[i%2] += a[l] > a[r] ? a[l++] : a[r--];
	cout << cnt[0] << ' ' << cnt[1];
	return 0;
}