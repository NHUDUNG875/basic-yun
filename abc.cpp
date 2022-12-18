#include <bits/stdc++.h>
#define f1(i,n) for(int i=1;i<=n; ++i)
#define f0(i,n) for(int i=0;i<n; ++i)
using namespace std;
using ll = long long;

ll C(int n, int k){
    ll result = 1;
    for (int i = n, j = 1; j <= k; --i, ++j)
       return result = result * i / j;
}

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
		map<int, int> mp;
        f1(i, n){
            int x; cin >> x;
			mp[x]++;
        }
		int res, fre=-1e9, res1, fre1=1e9; 
		for(auto it : mp){
			if(it.first > fre){
				fre=it.first;
				res=it.second;
			}
		}
		for(auto it : mp){
			if(it.first < fre1){
				fre1=it.first;
				res1=it.second;
			}
		}
		cout << C(res1, 1)*C(res,1)*2 << '\n';
    }
	return 0;
}
