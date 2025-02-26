#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
int n;

void solve(){
    cin >> n;
    if(n <= 4){
        cout << "-1\n";
    }
    else{

        for(int i = 2; i <= n; i += 2){  
            if(i == 4) continue;
            cout << i <<' ';
        }
        cout << 4 <<' ' << 5 <<' ';
        for(int i = 1; i <= n; i += 2){
            if(i == 5) continue;
            cout << i <<' ';
        }
        cout << endl;
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}