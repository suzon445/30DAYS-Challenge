#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  int n,k;
  cin >> n >> k;
  vector<pair<int,int>> arr(n);
  for(int i = 0; i < n; i++){
    cin >> arr[i].first;
    arr[i].second = i+1;
  }
  sort(arr.begin(),arr.end());
  int ind = n-k;
  cout << arr[ind].first <<'\n';
  for(int i = ind; i < n; i++){
    cout << arr[i].second <<' ';
  }
  cout << endl;
  return 0;
}