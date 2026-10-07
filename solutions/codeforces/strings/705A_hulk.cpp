// Hulk | https://codeforces.com/problemset/problem/705/A
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int layers;
    std::cin >> layers;
    for (int i = 0; i < layers; ++i) {
        if (i) std::cout << " that ";
        std::cout << (i % 2 == 0 ? "I hate" : "I love");
    }
    std::cout << " it\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
