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
    if(a == vector<int> (n,0)){
        cout << "0\n";
        return;
    }
    int  i = 0, j = n-1;
    while(a[i] == 0) i++;
    while(a[j] == 0) j--;

    if(count(a.begin()+i,a.begin()+ j + 1, 0) == 0){
        cout << "1\n";
    }
    else{
        cout << "2\n";
    }

    
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}