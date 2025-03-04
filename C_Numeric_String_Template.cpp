#include <bits/stdc++.h>

using u32 = unsigned;
using i64 = long long;
using u64 = unsigned long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::map<int, int> f;
    for (int i = 0; i < n; i++) {
        int x;
        if (f.contains(a[i])) {
            x = f[a[i]];
        } else {
            x = -1;
        }
        f[a[i]] = i;
        a[i] = x;
    }
    
    auto check = [&](const auto &s) {
        if (s.size() != n) {
            return false;
        }
        std::vector<int> b(n);
        std::array<int, 26> f;
        f.fill(-1);
        for (int i = 0; i < n; i++) {
            b[i] = f[s[i] - 'a'];
            f[s[i] - 'a'] = i;
        }
        return a == b;
    };
    
    int m;
    std::cin >> m;
    
    for (int i = 0; i < m; i++) {
        std::string s;
        std::cin >> s;
        
        if (check(s)) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
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