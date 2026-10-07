// Vanya and Cubes | https://codeforces.com/problemset/problem/492/A
// Time: O(n^(1/3)); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int cubes;
    std::cin >> cubes;
    int height = 0, next_layer = 1;
    while (cubes >= next_layer) {
        cubes -= next_layer;
        ++height;
        next_layer += height + 1;
    }
    std::cout << height << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
