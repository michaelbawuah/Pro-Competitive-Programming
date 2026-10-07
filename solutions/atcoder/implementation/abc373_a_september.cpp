// September | https://atcoder.jp/contests/abc373/tasks/abc373_a
// Time: O(total characters); extra space: O(max length).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int count=0;for(std::size_t i=1;i<=12;++i){std::string s;std::cin>>s;count+=s.size()==i;}std::cout<<count<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
