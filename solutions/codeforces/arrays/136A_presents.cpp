// Presents | https://codeforces.com/problemset/problem/136/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;
    std::cin >> n;
    std::vector<int> giver(n + 1);
    for (int person = 1; person <= n; ++person) { int recipient; std::cin >> recipient; giver[recipient] = person; }
    for (int person = 1; person <= n; ++person) std::cout << giver[person] << ' ';
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
