// Missing Number | https://cses.fi/problemset/task/1083/
// Time: O(n); extra space: O(1).
#include <iostream>



void solve() {
    long long n;
    std::cin >> n;
    long long missing = n * (n + 1) / 2;
    for (long long i = 1, value; i < n; ++i) {
        std::cin >> value;
        missing -= value;
    }
    std::cout << missing << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
