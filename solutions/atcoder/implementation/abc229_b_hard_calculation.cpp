// Hard Calculation | https://atcoder.jp/contests/abc229/tasks/abc229_b
// Time: O(log(max(A,B))); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b;
    std::cin>>a>>b;
    bool carry=false;
    while(a||b) {
        carry=carry||a%10+b%10>=10;
        a/=10;
        b/=10;
    }
    std::cout<<(carry?"Hard":"Easy")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
