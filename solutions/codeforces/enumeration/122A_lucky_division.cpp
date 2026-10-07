// Lucky Division | https://codeforces.com/problemset/problem/122/A
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;
    std::cin >> n;
    const std::vector<int> lucky{4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    bool possible = false;
    for (int divisor : lucky) possible = possible || n % divisor == 0;
    std::cout << (possible ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
