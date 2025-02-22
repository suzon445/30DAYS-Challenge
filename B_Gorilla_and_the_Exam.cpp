#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<int> v{1};
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1]){
            v.back()++;
        }else v.push_back(1);
    }
    sort(v.begin(),v.end());
    int len = v.size();
    for(int i = 0; i < len; i++){
        if(v[i] > k){
            cout << len-i << endl;
            return;
        }
        k -= v[i];
    }
    cout << 1 << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}