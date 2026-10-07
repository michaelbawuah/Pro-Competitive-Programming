// Puzzles | https://codeforces.com/problemset/problem/337/A
// Time: O(m log m); extra space: O(m).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int children, count;
    std::cin >> children >> count;
    std::vector<int> pieces(count);
    for (int& value : pieces) std::cin >> value;
    std::sort(pieces.begin(), pieces.end());
    int answer = pieces.back() - pieces.front();
    for (int i = 0; i + children <= count; ++i) answer = std::min(answer, pieces[i + children - 1] - pieces[i]);
    std::cout << answer << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
