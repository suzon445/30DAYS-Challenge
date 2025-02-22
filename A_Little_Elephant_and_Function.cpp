#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  if(n == 1) cout << 1 << endl;
  else{
    cout << n << ' ';
    for(int i = 1; i < n; i++){
        cout << i <<' ';
    }
    cout << '\n';
  }
  return 0;
}