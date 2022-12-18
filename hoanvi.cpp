#include <bits/stdc++.h>
#define f1(i, n) for(int i=1; i<=n; ++i)
#define f0(i, n) for(int i=0; i<n; ++i)
#define el cout << '\n'
using namespace std;
using ll = long long;
ll n,s,f[10001],res=0;
string b;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    // freopen("inp", "r", stdin);
    // freopen("out", "w", stdout);
    cin >> n >> s >> b;
    b=' '+b;
	f[0]=1;
    f1(i,n-1) f[i]=f[i-1]*2;
    f1(i,n){
		if (s>f[n-i]){
			s=s-f[n-i];
			cout << 1;
		}
		else cout << 0;
    }
    el;
    f1(i,n)  if (b[i]=='1') res=res+f[n-i];
    cout << res+1;
    return 0;
}