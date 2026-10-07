// Digit Queries | https://cses.fi/problemset/task/2431/
// Time: O(q log k); extra space: O(log k).
#include <iostream>
#include <string>



void solve() {
    int q; std::cin >> q;
    while (q--) {
        long long position; std::cin >> position;
        long long digits = 1, count = 9, first = 1;
        while (position > digits * count) {
            position -= digits * count;
            ++digits; count *= 10; first *= 10;
        }
        long long number = first + (position - 1) / digits;
        std::string value = std::to_string(number);
        std::cout << value[static_cast<std::size_t>((position - 1) % digits)] << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
