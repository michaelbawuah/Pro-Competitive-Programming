// Hit the Lottery | https://codeforces.com/problemset/problem/996/A
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int amount;
    std::cin >> amount;
    int bills = 0;
    for (int value : {100, 20, 10, 5, 1}) {
        bills += amount / value;
        amount %= value;
    }
    std::cout << bills << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
