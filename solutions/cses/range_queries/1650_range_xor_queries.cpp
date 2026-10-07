// Range Xor Queries | https://cses.fi/problemset/task/1650/
// Time: O(n + q); extra space: O(n).
#include <iostream>
#include <vector>



void solve() {
    int n, queries;
    std::cin >> n >> queries;
    std::vector<int> prefix(n + 1);
    for (int i = 1; i <= n; ++i) {
        int value;
        std::cin >> value;
        prefix[i] = prefix[i - 1] ^ value;
    }
    while (queries-- > 0) {
        int left, right;
        std::cin >> left >> right;
        std::cout << (prefix[right] ^ prefix[left - 1]) << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
