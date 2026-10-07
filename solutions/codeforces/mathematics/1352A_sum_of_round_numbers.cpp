// Sum of Round Numbers | https://codeforces.com/problemset/problem/1352/A
// Time: O(log n) per case; extra space: O(log n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests;
    std::cin >> tests;
    while (tests-- > 0) {
        int value;
        std::cin >> value;
        std::vector<int> parts;
        for (int place = 1; value > 0; place *= 10, value /= 10)
            if (value % 10) parts.push_back(value % 10 * place);
        std::cout << parts.size() << '\n';
        for (int part : parts) std::cout << part << ' ';
        std::cout << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
