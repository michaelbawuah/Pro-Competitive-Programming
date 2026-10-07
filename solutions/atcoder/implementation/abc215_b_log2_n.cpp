// log2(N) | https://atcoder.jp/contests/abc215/tasks/abc215_b
// Time: O(log N); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long n;
    std::cin>>n;
    int k=0;
    while(n>=2) {
        n/=2;
        ++k;
    }
    std::cout<<k<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
