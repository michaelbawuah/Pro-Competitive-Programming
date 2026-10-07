// Five Integers | https://atcoder.jp/contests/abc268/tasks/abc268_a
// Time: O(1); extra space: O(1).
#include <iostream>
#include <set>

void solve() {
    std::set<int>s;
    for(int i=0;i<5;++i) {
        int x;
        std::cin>>x;
        s.insert(x);
    }
    std::cout<<s.size()<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
