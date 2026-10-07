// Count Takahashi | https://atcoder.jp/contests/abc359/tasks/abc359_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,count=0;
    std::cin>>n;
    while(n--) {
        std::string s;
        std::cin>>s;
        count+=s=="Takahashi";
    }
    std::cout<<count<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
