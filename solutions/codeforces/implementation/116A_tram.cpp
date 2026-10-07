// Tram | https://codeforces.com/problemset/problem/116/A
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>



void solve() {
    int stops, passengers = 0, capacity = 0;
    std::cin >> stops;
    while (stops-- > 0) {
        int leaving, entering;
        std::cin >> leaving >> entering;
        passengers += entering - leaving;
        capacity = std::max(capacity, passengers);
    }
    std::cout << capacity << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
