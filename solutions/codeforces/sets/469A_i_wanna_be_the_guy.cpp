// I Wanna Be the Guy | https://codeforces.com/problemset/problem/469/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int levels;
    std::cin >> levels;
    std::vector<bool> passed(levels + 1);
    for (int player = 0; player < 2; ++player) {
        int count;
        std::cin >> count;
        while (count-- > 0) {
            int level;
            std::cin >> level;
            passed[level] = true;
        }
    }
    const bool all = std::all_of(passed.begin() + 1, passed.end(), [](bool value) { return value; });
    std::cout << (all ? "I become the guy." : "Oh, my keyboard!") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
