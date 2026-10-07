// Next | https://atcoder.jp/contests/abc329/tasks/abc329_b
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
    auto it=values.rbegin();
    ++it;
    std::cout<<*it<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
