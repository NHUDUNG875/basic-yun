#include <bits/stdc++.h>
#define f1(i, n) for(int i=1; i<=n; ++i)
#define f0(i, n) for(int i=0; i<n; ++i)
using namespace std;
using ll = long long;
const int N = 1e6+1;
const int mod = 1e9+7;
/*
	gọi L[i] : là độ dài dãy con tăng dài nhất kết thúc ở vị trí i
	L[i] = max(L[i], L[j] + 1) : với j là có chỉ số các phần tử đứng trc i sao cho a[i] > a[j]
	độ dài ban đầu của dãy con là 1 
*/
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	vector<int> a(n);
	vector<int> L(n, 1); 
	f0(i, n) cin >> a[i];
	f0(i, n) f0(j, i) if(a[i] > a[j]) L[i]=max(L[i], L[j]+1);
	cout << *max_element(L.begin(), L.end());
	return 0;
}