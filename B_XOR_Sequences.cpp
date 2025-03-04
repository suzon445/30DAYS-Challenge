#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int x,y;
    cin >> x >> y;

    for(int i = 0; i <= 30; i++){
        if((x & (1 << i)) != (y & (1 << i))){
            cout << (1 << i) << endl;
            return;
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