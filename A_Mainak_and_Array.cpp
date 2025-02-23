#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int ans = a[n-1]-a[0];
    for(int i = 0; i < n-1; i++){
        ans = max(ans,a[i]-a[i+1]);
    }
    for(int i = 1; i < n; i++){
        ans = max(ans,a[i]-a[0]);
    }
    for(int i = 0; i < n-1; i++){
        ans = max(ans,a[n-1]-a[i]);
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