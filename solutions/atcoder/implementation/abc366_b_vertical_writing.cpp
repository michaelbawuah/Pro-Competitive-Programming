// Vertical Writing | https://atcoder.jp/contests/abc366/tasks/abc366_b
// Time: O(NM), M=max length; extra space: O(total characters+N).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<std::string>s(n);std::size_t longest=0;for(auto&row:s){std::cin>>row;longest=std::max(longest,row.size());}for(std::size_t column=0;column<longest;++column){std::string line;for(int i=n-1;i>=0;--i)line+=column<s[i].size()?s[i][column]:'*';while(!line.empty()&&line.back()=='*')line.pop_back();std::cout<<line<<'\n';}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
