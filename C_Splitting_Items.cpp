#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n,k; 
    cin >> n >> k;

    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n), reverse(a,a+n);
    ll ans = 0, rem = k;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) ans += a[i];
        else{
            int need = min(rem,a[i-1]-a[i]);
            rem -= need;
            ans -= need + a[i];
        }
    }
    cout << ans << '\n';

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}