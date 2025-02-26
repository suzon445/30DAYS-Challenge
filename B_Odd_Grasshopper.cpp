#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    ll x,n;
    cin >> x >> n;
    for(ll i = n/4 *4 + 1; i <= n; i++){
        if(x & 1) x += i;
        else x -= i;
    }
    cout << x << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}