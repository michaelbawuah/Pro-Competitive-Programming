// Ordinary Numbers | https://codeforces.com/problemset/problem/1520/B
// Time: O(log n) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        long long n; std::cin >> n; int answer=0;
        for (int digit=1;digit<=9;++digit)
            for (long long number=digit;number<=n;number=number*10+digit) ++answer;
        std::cout << answer << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
