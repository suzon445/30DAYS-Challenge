#include<bits/stdc++.h>
using namespace std;

const int N = 3e5 + 9;
using ll = long long;

void solve() {
  string s; cin >> s;
  int n = s.size();
  for (int i = 0; i + 1 < n; i++) {
    if (s[i] == s[i + 1]) {
      cout << s.substr(i, 2) << '\n';
      return;
    }
  }
  for (int i = 0; i + 2 < n; i++) {
    if (s[i] != s[i + 1] and s[i] != s[i + 2] and s[i + 1] != s[i + 2]) {
      cout << s.substr(i, 3) << '\n';
      return;
    }
  }
  cout << -1 << '\n';
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}