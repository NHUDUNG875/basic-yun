/**
	https://lqdoj.edu.vn/problem/findpair
 **/

/*#include <iostream>
#include <fstream>
#include <algorithm>
#include <set> 
#include <map>
#include <vector>
using namespace std;
using ll = long long;
const int N = 1e6+1;
const int mod = 1e9+7;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, x; cin >> n >> x;
	int a[n];
	for(int i = 1;i <= n; i++) cin >> a[i];
	int i = 1, j=n;
	while( i < j){
		if(a[i] + a[j] == x){
		    cout << i << ' ' << j;
		    return 0;
		} 
		else if(a[i] + a[j] > x) j--;
		else i++;
		
	}
	cout << "No solution \n";
	return 0;
}*/

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
	int a[n];
	f1(i,n) cin >> a[i];
	int i = 1, j=n;
	f1(i, n){
	while( i < j && a[i] + a[j] > x) j--;
		if(a[i] + a[j] == x){
			return cout << i << ' ' << j, 0;
		}
	}
	cout << "No solution \n";
	return 0;
}
