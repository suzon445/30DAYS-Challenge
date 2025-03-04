#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int a,b,c;
    cin >> a >> b >> c;

    bool ok = false;
    int first = b - (c-b);
    if(first >= a and first % a == 0 and first != 0) ok = true;
    int second = a + (c-a)/2;
    if(second >= b and (c-a) % 2 == 0 and second % b == 0 and second != 0) ok= true;
    int last = a + 2*(b-a);
    if(last >= c and last % c == 0 and last != 0) ok = true;
    
    cout << (ok ? "YES\n" : "NO\n" );
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}