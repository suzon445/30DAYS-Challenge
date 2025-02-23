#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n+1], b[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = i;
    }

    if(n == 1){
        cout << "-1\n";
        return;
    }
    for(int i = 1; i < n; i++){
        if(a[i] == b[i]) swap(b[i],b[i+1]);
    }
    if(a[n] == b[n]) swap(b[n],b[n-1]);
    for(int i = 1; i <= n; i++){
        cout << b[i] << (i == n ? '\n' : ' ');
    }

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}