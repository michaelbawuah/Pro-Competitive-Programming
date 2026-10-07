// Rightmost | https://atcoder.jp/contests/abc276/tasks/abc276_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;int answer=-1;for(std::size_t i=0;i<s.size();++i)if(s[i]=='a')answer=static_cast<int>(i)+1;std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
