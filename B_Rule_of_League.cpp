#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int n,x,y;
    cin >> n >> x >> y;

    if(x > y) swap(x,y);

    if(x || !y || (n-1) % y){
        cout << "-1\n";
        continue;
    }
    for(int k = 2; k <= n; k+= y){
        for(int i = 1; i <= y; i++){
            cout << k <<' ';
        }
    }
    cout << '\n';
  }
  return 0;
}