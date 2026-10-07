// Two Sets | https://cses.fi/problemset/task/1092/
// Time: O(n); extra space: O(n).
#include <iostream>
#include <vector>



void solve() {
    long long n; std::cin >> n;
    long long total = n * (n + 1) / 2;
    if (total % 2 != 0) { std::cout << "NO\n"; return; }
    long long remaining = total / 2;
    std::vector<long long> a, b;
    for (long long value = n; value >= 1; --value) {
        if (value <= remaining) { a.push_back(value); remaining -= value; }
        else b.push_back(value);
    }
    std::cout << "YES\n" << a.size() << '\n';
    for (long long value : a) std::cout << value << ' ';
    std::cout << '\n' << b.size() << '\n';
    for (long long value : b) std::cout << value << ' ';
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
