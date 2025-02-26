#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    string s; cin >> s;
    
    int cnt = 0, ans = 0;
    for(char c : s){
        if(cnt < 0){
            cnt++;
            continue;
        }
        if(c == '0'){
            cnt++;
            if(cnt == m){
                cnt = -k + 1;
                ans++;
            }
        }
        else cnt = 0;
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