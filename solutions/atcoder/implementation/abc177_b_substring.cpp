// Substring | https://atcoder.jp/contests/abc177/tasks/abc177_b
// Time: O(|S||T|); extra space: O(|S|+|T|).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s,t;std::cin>>s>>t;int best=static_cast<int>(t.size());for(std::size_t i=0;i+t.size()<=s.size();++i){int count=0;for(std::size_t j=0;j<t.size();++j)count+=s[i+j]!=t[j];best=std::min(best,count);}std::cout<<best<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
