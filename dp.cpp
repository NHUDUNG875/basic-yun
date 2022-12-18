#include <bits/stdc++.h>
#define f1(i,n) for(int i=1;i<=n; ++i)
#define f0(i,n) for(int i=0;i<n; ++i)
using namespace std;
using ll = long long;
const int N = 1001;
const int mod = 1e9+7;
int p, c, n, cnt=0;
vector<int>a[N];
bool dd[N], visited[N];
void dfs(int u){
	//cnt-=(visited[u]=1);
	if(visited[u]==1) ++cnt;
	for(int v:a[u]) if(!dd[v] && !visited[v]) dfs(v);
}

void inp(){
	cin >> p >> c >> n;
	int x, y;
	f0(i,c){
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	//memset(visited, false, sizeof(visited));
	while(n--){
		cin >> x;
		for(int v:a[x])
		dd[v]=true;
	}
	// cnt=p;
	dfs(1);
	// cout << cnt;
	cout << cnt;
	//cout << p - cnt;
}
int main(){
	//freopen("input.inp", "r", stdin);
	//freopen("output.out", "w", stdout);
	ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
	inp();
	return 0;
}

// 6 6 
// x x x o o o 
// o o x o o o 
// o x x x x o 
// o o o o o x 
// x x o x o x 
// x o x x o x 
