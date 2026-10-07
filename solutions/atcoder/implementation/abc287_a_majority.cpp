// Majority | https://atcoder.jp/contests/abc287/tasks/abc287_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,count=0;
    std::cin>>n;
    for(int i=0;i<n;++i) {
        std::string s;
        std::cin>>s;
        count+=s=="For";
    }
    std::cout<<(2*count>n?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
