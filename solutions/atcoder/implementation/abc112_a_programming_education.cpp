// Programming Education | https://atcoder.jp/contests/abc112/tasks/abc112_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    if(n==1)std::cout<<"Hello World\n";
    else {
        int a,b;
        std::cin>>a>>b;
        std::cout<<a+b<<'\n';
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
