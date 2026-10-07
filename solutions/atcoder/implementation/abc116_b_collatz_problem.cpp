// Collatz Problem | https://atcoder.jp/contests/abc116/tasks/abc116_b
// Time: O(m log m); extra space: O(m).
#include <iostream>
#include <set>



void solve() {
    int x;std::cin>>x;std::set<int>seen;int index=1;while(seen.insert(x).second){x=x%2?3*x+1:x/2;++index;}std::cout<<index<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
