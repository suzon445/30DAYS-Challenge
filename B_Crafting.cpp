#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n],b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < b[i]){
            cnt++;
        }
    }
    if(cnt == 0){
        cout << "YES" << endl;
        return;
    }
    if(cnt >= 2){
        cout << "NO" << endl;
        return;
    }
    int need = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < b[i]){
            need = b[i]-a[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i] >= b[i] and a[i]-need < b[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}