// Base 2 | https://atcoder.jp/contests/abc306/tasks/abc306_b
// Time: O(1); extra space: O(1).
#include <cstdint>
#include <iostream>

void solve() {
    std::uint64_t answer=0;
    for(int i=0;i<64;++i) {
        int bit;
        std::cin>>bit;
        if(bit)answer|=std::uint64_t{1}<<i;
    }
    std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
