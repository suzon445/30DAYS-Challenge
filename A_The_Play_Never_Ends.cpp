#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int k; cin >> k;
    if(k == 1){
        cout << "YES\n";
        return;
    }
    else{
        if((k-1)% 3 == 0){
            cout <<"YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}