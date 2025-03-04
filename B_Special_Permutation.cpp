#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n,a,b;
    cin >> n >> a >> b;
    
    if(n-a-(b > a) < n / 2 -1 or b-1-(a < b) < n / 2 - 1){
        cout << "-1\n";
        return;
    }
    vector<int> p;
    for (int i = n; int(p.size()) < n / 2 - 1; i--) {
        if (i != b) {
            p.push_back(i);
        }
    }
    p.push_back(a);
    for (int i = 1; int(p.size()) < n - 1; i++) {
        if (i != a) {
            p.push_back(i);
        }
    }
    p.push_back(b);

    for(int i = 0; i < n; i++){
        cout << p[i] <<" \n"[i == n-1];
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}