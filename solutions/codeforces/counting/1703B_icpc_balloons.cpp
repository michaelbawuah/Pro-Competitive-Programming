// ICPC Balloons | https://codeforces.com/problemset/problem/1703/B
// Time: O(n) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) { int n; std::string solved; std::cin >> n >> solved; std::vector<bool> seen(26); int balloons=0; for (char task:solved) { balloons+=seen[task-'A'] ? 1 : 2; seen[task-'A']=true; } std::cout << balloons << '\n'; }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
