// Creating Strings | https://cses.fi/problemset/task/1622/
// Time: O(n * k), k distinct permutations; extra space: O(n * k).
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>



void solve() {
    std::string s; std::cin >> s;
    std::sort(s.begin(), s.end());
    std::vector<std::string> permutations;
    do { permutations.push_back(s); } while (std::next_permutation(s.begin(), s.end()));
    std::cout << permutations.size() << '\n';
    for (const auto& value : permutations) std::cout << value << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
