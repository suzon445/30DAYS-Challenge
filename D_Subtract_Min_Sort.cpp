#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int pre = a[1]-a[0];
    if(pre >= 0){
        for(int i = 2; i < n; i++){
            if(a[i]-pre >= 0){
                pre = a[i]-pre;
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}