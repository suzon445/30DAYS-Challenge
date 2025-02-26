#include <bits/stdc++.h>
 
#define ll long long
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define pb push_back
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
 
using namespace std;
 
 
 
void task() {
     int n,m,q;
     cin >> n >> m >> q;
 
     vector<int> v(m);
     for(int i = 0; i < m; i++){
     	cin >> v[i];
     }
     sort(all(v));
     for(int i = 0; i < q; i++){
     	int a;
     	cin >> a;
     	auto it = lower_bound(all(v),a)-v.begin();
     	if(it == 0){
     		cout << v[0]-1 << endl;
     	}
     	else if(it == m){
     		cout << n-v[m-1] << endl;
     	}
     	else{
     		cout << (v[it]-v[it-1])/2 << endl;
     	}
     
     }
 
}
 
int main () {
	FIO;
	int tt; cin >> tt;
	while (tt--){
		task();
	} 
		
	return 0;
}