#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    if(n < 3){
        cout << "0\n";
        return;
    }
    int cnt1 = 0;
    for(auto x : s){
        if(x == '_') cnt1++;
    }
    int cnt2 = n-cnt1;
    if(cnt1 == 0 || cnt2 < 2){
        cout << "0\n";
    }
    else{
        int f = (cnt2 + 1)/2;
        int l = cnt2-f;
        cout << 1LL*f*l*cnt1 << endl;
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}