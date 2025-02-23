#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n,m,k; cin >> n >> m >> k;
    vector<int> arr(m), q(k);
    for(int i = 0; i < m; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < k; i++){
        cin >> q[i];
    }
    if(k == n){
        cout << string(m,'1') <<'\n';
    }
    else if(n-1 > k){
        cout << string(m,'0') << '\n';
    }else{
        ll x = 1LL*n*(n+1)/2 - accumulate(q.begin(),q.end(),0LL);
        for(int i = 0; i < m; i++){
            cout << (x == arr[i]);
        }
        cout << '\n';
    }

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}