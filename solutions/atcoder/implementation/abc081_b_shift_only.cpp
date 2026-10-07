// Shift only | https://atcoder.jp/contests/abc081/tasks/abc081_b
// Time: O(n log A); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,answer=30;
    std::cin>>n;
    while(n--) {
        int x,k=0;
        std::cin>>x;
        while(x%2==0) {
            x/=2;
            ++k;
        }
        answer=std::min(answer,k);
    }
    std::cout<<answer<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
