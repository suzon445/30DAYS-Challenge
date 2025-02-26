#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n,d; 
    cin >> n >> d;
    cout << 1 <<' ';
    if(n >= 3 or d % 3 == 0){
        cout << 3 <<' ';
    }
    if(d == 5){
        cout << 5 <<' ';
    }
    if(n >= 3 or d == 7){
        cout << 7 <<' ';
    }
    if(n >= 6 or d % 9 == 0 or (n >= 3 and d % 3 == 0)){
        cout << 9;
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