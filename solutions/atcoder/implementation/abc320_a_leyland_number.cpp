// Leyland Number | https://atcoder.jp/contests/abc320/tasks/abc320_a
// Time: O(A+B); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int a,b;
    std::cin>>a>>b;
    auto power=[](int base,int exponent) {
        long long value=1;
        while(exponent--)value*=base;
        return value;
    };
    std::cout<<power(a,b)+power(b,a)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
