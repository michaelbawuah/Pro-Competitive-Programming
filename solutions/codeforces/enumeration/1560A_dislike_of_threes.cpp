// Dislike of Threes | https://codeforces.com/problemset/problem/1560/A
// Time: O(K + t), K = maximum supported rank; extra space: O(K).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::vector<int> sequence;
    for (int value=1;sequence.size()<1000;++value) if (value%3!=0 && value%10!=3) sequence.push_back(value);
    int tests; std::cin >> tests;
    while (tests-- > 0) { int k; std::cin >> k; std::cout << sequence[k-1] << '\n'; }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
