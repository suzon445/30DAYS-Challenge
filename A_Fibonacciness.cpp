#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
     int a1,a2,a4,a5;
     cin >> a1 >> a2 >> a4 >> a5;
     int f = a1 + a2;
     int ans1 = 1;
     if(f+a2 == a4) ans1++;
     if(a4+f == a5) ans1++;

     int l = a4-a2;
     int ans = 0;
     if(a1 + a2 == l) ans++;
     if(a2 + l == a4) ans++;
     if(l + a4 == a5) ans++;
     
     cout << max(ans1,ans) << endl;
    
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}