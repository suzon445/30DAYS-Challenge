#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    
    vector<bool> check(n+2,0);
    int pre = 1;
   
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(!check[x]){
            check[x] = 1;
            cout << x <<" \n"[i + 1 == n];
        }else{
            while(check[pre]) pre++;
            check[pre] = true;
            cout << pre << " \n"[i + 1 == n];
        }
    }
    

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}