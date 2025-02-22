#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n,m; cin >> n >> m;
    vector<vector<int>> arr(n,vector<int> (m));
    for(int i = 0; i < n; i++){
        vector<int> curr(m);
        for(int j = 0; j < m; j++){
            cin >> curr[j];
            curr[j] = curr[j] % n;
        }
        arr[i] = curr;
    }
    for(int i = 0; i < n; i++){
        for(int j = 1; j < m; j++){
            if(arr[i][j] != arr[i][j-1]){
                cout << "-1" << '\n';
                return;
            }
        }
    }
    vector<pair<int,int>> p(n);
    for(int i = 0; i < n; i++){
        p[i] = {arr[i][0],i+1};
    }
    sort(p.begin(),p.end());
    for(auto x : p){
        cout << x.second <<' ';
    }
    cout << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}