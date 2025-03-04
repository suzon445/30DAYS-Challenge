#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n; cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++) cin >> v[i].first;
    for(int i = 0; i < n; i++) cin >> v[i].second;

    sort(v.begin(), v.end(), 

           [](const pair<int, int>& a, const pair<int, int>& b) { 

               return a.second < b.second; 

           });
    ll second = 0;
    for(int i = 0; i < n; i++){

        if(i+1 != n)
            second += (v[i].first + v[i].second);
        else second += v[i].first;
    
        
    } 
    cout << second << '\n';      
    
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}