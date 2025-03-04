#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll mx = 0, sum = 0, extra = 0;
    for(int i = 0; i < n; i++){
        mx = max(mx, arr[i]);
        ll need = mx - arr[i];
        sum += need;
        extra = max(extra,need);
    }
    cout << sum + extra << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}