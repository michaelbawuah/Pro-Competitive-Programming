// Wrong Subtraction | https://codeforces.com/problemset/problem/977/A
// Time: O(k); extra space: O(1).
#include <iostream>



void solve() {
    int value, operations;
    std::cin >> value >> operations;
    while (operations-- > 0) {
        if (value % 10 == 0) value /= 10;
        else --value;
    }
    std::cout << value << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
