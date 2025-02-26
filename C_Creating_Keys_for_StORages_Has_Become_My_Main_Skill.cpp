#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

string to_binary(int x){
    string cur;
    while(x > 0){
        cur += (x % 2 ? '1': '0');
        x /= 2;
        
    }
    //reverse(cur.begin(),cur.end());
    return cur;

}

void solve(){
    int n,x;
    cin >> n >> x;
    string s = to_binary(x);
    //cout << s << endl;
    if(n == 1){
        cout << x << endl;
        return;
    }
    if(n == 2){
        cout << 0 <<' ' << x << endl;
        return;
    }
    int first_0 = -1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0') {
            first_0 = i;
            break;
        }
    }
    vector<int> ans(n,0);
    if(first_0 == -1){
        for(int i = 0; (i < n and i <= x); i++){
            ans[i] = i;
        }
    }
    else{
        int ele = (1 << first_0)-1;
        for(int i = 0; i <= ele ; i++){
            ans[i] = i;
        }
    }
    int cnt = 0;
    for(auto c : ans){
        cnt = cnt | c;
    }
    //cout << cnt << endl;
    if(cnt != x){
        ans[n-1] = x;
    }
    for(auto c : ans){
        cout << c <<' ';
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