#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
   
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll odd = 0, even = 0;
    for(int i = 0; i < n; i++){
        if(i & 1) odd += arr[i];
        else even += arr[i];
    }
    int n1 = n/ 2, n2 = n/2;
    if(n & 1) n2++;

    if(odd % n1 != 0 or even % n2 != 0 or odd / n1 != even / n2){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    
    
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