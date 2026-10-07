// Coins | https://atcoder.jp/contests/dp/tasks/dp_i
// Time: O(n^2); extra space: O(n).
#include <iomanip>
#include <iostream>
#include <vector>



void solve() {
    int n;
    std::cin >> n;
    std::vector<double> probability(n + 1);
    probability[0] = 1.0;
    for (int tossed = 0; tossed < n; ++tossed) {
        double heads_probability;
        std::cin >> heads_probability;
        for (int heads = tossed + 1; heads >= 0; --heads) {
            probability[heads] *= 1.0 - heads_probability;
            if (heads > 0) probability[heads] += probability[heads - 1] * heads_probability;
        }
    }
    double answer = 0.0;
    for (int heads = n / 2 + 1; heads <= n; ++heads) answer += probability[heads];
    std::cout << std::fixed << std::setprecision(15) << answer << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
