#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,k; cin >> n >> k;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x < k) arr.push_back(x);

    }
    sort(arr.begin(), arr.end());
    
    int score = 0;
    int i = 0, j = arr.size()-1;
    while(i < j){
        if(arr[i] + arr[j] == k){
            score++;
            i++, j--;
        }
        else if(arr[i] + arr[j] < k) i++;
        else j--;

        
    }
    cout << score << '\n';
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}