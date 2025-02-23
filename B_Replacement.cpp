#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    string s1,s2;
    cin >> s1 >> s2;

    int cnt0 = count(s1.begin(),s1.end(), '0');
    int cnt1 = n - cnt0;

    for(int i = 0; i + 1 < n; i++){
        if(cnt0 == 0 || cnt1 == 0){
            cout << "NO\n";
            return;
        }
        if(s2[i] == '1') cnt0--;
        else cnt1--;
    }
    cout << "YES\n";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}