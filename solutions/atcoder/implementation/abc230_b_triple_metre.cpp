// Triple Metre | https://atcoder.jp/contests/abc230/tasks/abc230_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s,pattern="oxx";std::cin>>s;bool possible=false;for(int start=0;start<3;++start){bool ok=true;for(std::size_t i=0;i<s.size();++i)ok=ok&&s[i]==pattern[(i+start)%3];possible=possible||ok;}std::cout<<(possible?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
