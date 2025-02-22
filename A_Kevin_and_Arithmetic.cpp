#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<int> cnt(2,0);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        cnt[x % 2]++;
    }
    if(cnt[0] == 0){
        cout << cnt[1]-1 << endl;
    }
    else{
        cout << cnt[1]+1 << endl;
     }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}