#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    ll sum = 0, mx = 0,ans = 0;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        sum += x;
        mx = max(mx,x);
        if(sum - mx == mx) ans++;
    }
    cout << ans << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}