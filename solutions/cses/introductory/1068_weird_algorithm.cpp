// Weird Algorithm | https://cses.fi/problemset/task/1068/
// Time: O(L) steps; extra space: O(1).
#include <iostream>



void solve() {
    long long n;
    std::cin >> n;
    while (true) {
        std::cout << n;
        if (n == 1) break;
        std::cout << ' ';
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
