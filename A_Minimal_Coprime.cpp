#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int l,r; cin >> l >> r;
    if(l == 1 and r == 1){
        cout << 1 << endl;
    }else{
        cout << r-l << endl;
    }
  }
  return 0;
}