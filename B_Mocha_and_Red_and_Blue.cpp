#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    for (int i = 1; i < n; i++) {
        if (s[i] == '?' && s[i - 1] != '?') {
            s[i] = (s[i - 1] == 'B' ? 'R' : 'B');
        }
    }
    
    if (s[n - 1] == '?') {
        s[n - 1] = 'R';
    }
    
    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == '?') {
            s[i] = (s[i + 1] == 'B' ? 'R' : 'B');
        }
    }
    cout << s << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}