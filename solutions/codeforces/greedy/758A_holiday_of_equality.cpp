// Holiday Of Equality | https://codeforces.com/problemset/problem/758/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;
    std::cin >> n;
    std::vector<int> wealth(n);
    for (int& value : wealth) std::cin >> value;
    const int target = *std::max_element(wealth.begin(), wealth.end());
    int payment = 0;
    for (int value : wealth) payment += target - value;
    std::cout << payment << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
