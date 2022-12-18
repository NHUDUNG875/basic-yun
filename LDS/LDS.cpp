/*#include <bits/stdc++.h>
#define f1(i, n) for(int i=1; i<=n; ++i)
#define f0(i, n) for(int i=0; i<n; ++i)
using namespace std;
using ll = long long;
const int N = 1e6+1;
const int mod = 1e9+7;
/*
	gọi L[i] : là độ dài dãy con chia hết với phần tử cuối cùng kết thúc tại i
	L[a[i]]=max(L[a[j]]+1, L[a[i]]) với 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	vector<int> a(n);
	vector<int> L(n, 1); 
	f1(i, n) cin >> a[i];
	f1(i, n) f1(j, i-1) L[a[i]]=max(L[a[j]]+1, L[a[i]]);
	int res=0;
	f1(i,n) 
	if(res<L[i]) res=L[i];
	cout << res;
	//cout << *max_element(L.begin(), L.end());
	return 0;
}
*/
#include <bits/stdc++.h>
#define f1(i, n) for(int i=1; i<=n; ++i)
#define f0(i, n) for(int i=0; i<n; ++i)
#define el cout << '\n'
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	int a[n];
	int MAX=-1e9, MIN=1e9;
    f1(i, n) cin >> a[i];
    f1(i, n) MAX=max(MAX, a[i]);
    int cnt;
    cnt=log(MAX); //cout << cnt;el;
    cout << MAX;el;
    cout << pow(10, cnt) - 1;
	return 0;
}
