#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int l,r,a;
    cin >> l >> r >> a;
    if(l/a == r/a){
        cout << r/a + r % a << endl;
    }
    else{
        cout << max(r/a + r % a , r/a -1 + a-1) << endl;
    }
  }
  return 0;
}