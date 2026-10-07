// Count Distinct Integers | https://atcoder.jp/contests/abc240/tasks/abc240_b
// Time: O(n log n); extra space: O(n).
#include <iostream>
#include <set>

void solve() {
    int n;
    std::cin>>n;
    std::set<int>values;
    while(n--) {
        int x;
        std::cin>>x;
        values.insert(x);
    }
    std::cout<<values.size()<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
