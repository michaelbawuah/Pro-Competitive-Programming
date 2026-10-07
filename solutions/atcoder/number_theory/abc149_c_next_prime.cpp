// Next Prime | https://atcoder.jp/contests/abc149/tasks/abc149_c
// Time: O((P-X+1) sqrt(P)); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int x;
    std::cin>>x;
    for(;;++x) {
        bool prime=true;
        for(int d=2;d<=x/d;++d)if(x%d==0) {
            prime=false;
            break;
        }
        if(prime) {
            std::cout<<x<<'\n';
            return;
        }
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
