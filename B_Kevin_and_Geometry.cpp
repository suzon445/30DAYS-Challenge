#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int k = -1;
    for(int i = 1; i < n; i++){
        if(a[i] == a[i-1]){
            k = i;
        }
    }
    if(k == -1){
        cout << -1 << endl;
        return;
    }
    int x = a[k];
    a.erase(a.begin()+k);
    a.erase(a.begin()+k-1);
    for(int i = 1; i < a.size(); i++){
        if(a[i] < a[i-1] + 2 * x){
            cout << x <<' ' << x << ' '<< a[i-1] << ' ' << a[i] << endl;
            return;
        }
    }
    cout << -1 << endl;
    

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}