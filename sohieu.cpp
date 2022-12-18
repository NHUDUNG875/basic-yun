#include <bits/stdc++.h>
#define f1(i, n) for(int i=1; i<=n; ++i)
#define f0(i, n) for(int i=0; i<n; ++i)
#define el cout << '\n'
using ll = long long ;
using namespace std;
ll n, x, f[1001], res, a[10001], dd[1001];
void sol(){
	f1(i, n){
		int cnt=0;
		f1(j, n){
			if(j<a[i] && dd[j]==0) ++cnt;
		}
		res+=f[n-i]*cnt;
		dd[a[i]]==1;
	}
	cout << res << '\n';
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	while(cin >> x) a[++n]=x;
	n--;
	f[0]=1;
	f1(i, n) f[i]=i*f[i-1];
	sol();
	return 0;
}