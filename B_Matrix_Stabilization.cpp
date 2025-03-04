#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n,m; cin >> n >> m;
    vector<vector<int>> a(n+2,vector<int> (m+2,0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] > a[i+1][j] and a[i][j] > a[i][j+1] and a[i][j] > a[i-1][j] and a[i][j] > a[i][j-1])
            a[i][j] = max({a[i][j+1],a[i+1][j] ,a[i-1][j],a[i][j-1]});
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << a[i][j] << ' ';
        }
        cout <<'\n';
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();
  return 0;
}