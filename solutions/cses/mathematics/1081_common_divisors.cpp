// Common Divisors | https://cses.fi/problemset/task/1081/
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
    std::vector<int> frequency(maximum + 1);
    for (int value : values) ++frequency[value];
    for (int divisor = maximum; divisor >= 1; --divisor) {
        int count = 0;
        for (int multiple = divisor; multiple <= maximum; multiple += divisor) {
            count += frequency[multiple];
            if (count >= 2) {
                std::cout << divisor << '\n';
                return;
            }
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
