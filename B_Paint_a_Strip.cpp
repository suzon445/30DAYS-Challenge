#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int ans = 1, curr = 1;
    while(true){
        if(curr >= n){
            break;;
        }
        curr = curr * 2 + 2;
        ans++;

    }
    cout << ans << endl;
  }
  return 0;
}