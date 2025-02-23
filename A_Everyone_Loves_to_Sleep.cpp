#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, H , M;
    cin >> n >> H >> M;
    //if(H > 12) H = H % 12;
    int first = H * 60 + M;
    int mn = 1e9;
    while(n--){
        int h,m; cin >> h >> m;
        //if(h > 12) h = h % 12;
        int last = h * 60 + m;
        int need = last - first;
        if(need < 0) need += 24 * 60;
        mn = min(mn,need);
    }
    //cout << mn << endl;
    cout << mn / 60 <<' ' << mn % 60 << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}