// Ticket Counter | https://atcoder.jp/contests/abc358/tasks/abc358_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    long long a,finish=0;
    std::cin>>n>>a;
    while(n--) {
        long long arrival;
        std::cin>>arrival;
        finish=std::max(finish,arrival)+a;
        std::cout<<finish<<'\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
