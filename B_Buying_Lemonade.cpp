#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    ll ans = 0;
    ll last = 0;
    ll left = n;
    for (auto x : a){
        ll use = (x - last) * left;
        left--;
        if (k <= use){
            ans += k;
            break;
        } else {
            k -= use;
            ans += use + 1;
        }
        last = x;
    }
    
    cout << ans << "\n";

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}