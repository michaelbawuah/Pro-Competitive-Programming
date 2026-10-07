// Counting Divisors | https://cses.fi/problemset/task/1713/
// Time: O(M log M + n), M = max input; extra space: O(M + n).
#include <algorithm>
#include <iostream>
#include <vector>



void solve() {
    int n;
    std::cin >> n;
    std::vector<int> values(n);
    for (int& value : values) std::cin >> value;
    const int maximum = *std::max_element(values.begin(), values.end());
    std::vector<int> divisors(maximum + 1);
    for (int divisor = 1; divisor <= maximum; ++divisor)
        for (int multiple = divisor; multiple <= maximum; multiple += divisor) ++divisors[multiple];
    for (int value : values) std::cout << divisors[value] << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
