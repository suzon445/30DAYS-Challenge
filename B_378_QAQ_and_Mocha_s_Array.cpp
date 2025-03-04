#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a,a+n);
    vector<int> b;
    int mn = a[0];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % mn) b.push_back(a[i]);
        else cnt++;
    }
    if(cnt == n){
        cout << "Yes\n";
        return;
    }
    else{
        sort(b.begin(),b.end());
        int m = b[0];
        for(auto x : b){
            if(x % m){
                cout << "No\n";
                return;
            }
        }
        cout << "Yes\n";
    }
    
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}