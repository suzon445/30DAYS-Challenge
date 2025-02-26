#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n,k,p;
    cin >> n >> k >> p;
    if(n * p < abs(k)){
        cout << "-1\n";
    }
    else{
        cout << (abs(k) + p - 1) / p << endl;;
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}