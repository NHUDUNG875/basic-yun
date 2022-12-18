/**
 http://laptrinhphothong.vn/Problem/Details/5650
**/

/*#include <iostream>
#include <bitset>
#include <algorithm>
#include <set> 
#include <math.h>
#include <vector>
#define el cout << '\n';
using namespace std;
using ll = long long;
const int N = 1e6+1;
const int mod = 1e9+7;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll n, ans=0, m; cin >> n >> m;
	ll s[n+1] = {0}, a[n+1];
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++) s[i]=s[i-1]+a[i] ;
	for(int i = 1; i <= n; i++)
		for(int j = i; j <= n; j++)
			ans+=(s[j] - s[i-1] <= m);
	cout << ans;
	return 0;
}*/

#include <iostream>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll n, ans=0, m; cin >> n >> m;
	int a[n+1];
	ll s[n+1] = {0}, sum = 0;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++) s[i] = s[i-1]+a[i];
	for(int i = 1; i <= n; i++){
		int j = 1;
		sum=s[i];
		while(sum > m){
			sum-=a[j++];
		}
		ans += (i-j+1);
	}
	cout << ans;
	return 0;
}