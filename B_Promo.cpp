#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n,q;
  cin >> n >> q;
  vector<ll> a(n),pre(n+1, 0);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a.begin(),a.end());
  reverse(a.begin(),a.end());
  pre[1] = a[0];
  for(int i = 2; i <= n; i++){
    pre[i] = a[i-1]+pre[i-1];
  }
  
  while(q--){
    int x,y; cin >> x >> y;
    cout << pre[x]-pre[x-y] << endl;
  }
  
  return 0;
}