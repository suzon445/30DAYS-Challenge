#include <bits/stdc++.h>
     
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

 
bool isSquare(i64 n) {
    int x = std::sqrt(n);
    return 1LL * x * x == n;
}
void solve() {
    int n;
    std::cin >> n;
    
    i64 sum = 1LL * n * (n + 1) / 2;
    if (isSquare(sum)) {
        std::cout << -1 << "\n";
        return;
    }
    
    std::vector<int> p(n);
    std::iota(p.begin(), p.end(), 1);
    for (int i = 1; i < n; i++) {
        if (isSquare(1LL * i * (i + 1) / 2)) {
            std::swap(p[i], p[i - 1]);
        }
    }
    for (auto x : p) {
        std::cout << x << " \n"[x == p.back()];
    }
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}