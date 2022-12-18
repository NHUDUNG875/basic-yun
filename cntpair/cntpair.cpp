/*
https://lqdoj.edu.vn/problem/cntpair02
*/

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
	int n, x; cin >> n >> x;
	int a[n+1];
	ll ans = 0;
	f1(i,n) cin >> a[i];
	int j1=n, j2=n;
	f1(i, n){
		while(a[i] + a[j2] > x) --j2;
		while(a[i] + a[j1] >= x) --j1;
		if(i >= j2) break;
		ans += j2 - max(i, j1);
	}
	cout << ans;
	return 0;
}
