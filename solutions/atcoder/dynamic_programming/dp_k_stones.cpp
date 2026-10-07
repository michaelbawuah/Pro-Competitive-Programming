// Stones | https://atcoder.jp/contests/dp/tasks/dp_k
// Time: O(n K); extra space: O(n + K).
#include <iostream>
#include <vector>



void solve() {
    int n, total;
    std::cin >> n >> total;
    std::vector<int> moves(n);
    for (int& move : moves) std::cin >> move;
    std::vector<bool> winning(total + 1);
    for (int stones = 1; stones <= total; ++stones) {
        for (int move : moves) {
            if (move > stones) break;
            if (!winning[stones - move]) {
                winning[stones] = true;
                break;
            }
        }
    }
    std::cout << (winning[total] ? "First" : "Second") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
