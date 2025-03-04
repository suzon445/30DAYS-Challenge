#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    string s, t;
    cin >> s >> t;
    int len_s = s.size();
    int len_t = t.size();
    
    int i = 0, j = 0;
    while(i < len_s and j < len_t){
        if(s[i] == t[j] or s[i] == '?'){
           s[i] = t[j];
           i++, j++;
        }
        else i++;
    }
    if(j == len_t){
        cout << "YES\n";
        for(auto x : s){
            if(x == '?'){
                cout << 'a';
                continue;
            }
            
            cout << x ;
        }
        cout <<"\n";
    }
    else cout << "NO\n";
   
    
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}