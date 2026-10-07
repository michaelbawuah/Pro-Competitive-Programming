// Remove It | https://atcoder.jp/contests/abc191/tasks/abc191_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,x;
    std::cin>>n>>x;
    while(n--) {
        int a;
        std::cin>>a;
        if(a!=x)std::cout<<a<<' ';
    }
    std::cout<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
