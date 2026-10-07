// Cycle Hit | https://atcoder.jp/contests/abc211/tasks/abc211_b
// Time: O(1); extra space: O(1).
#include <iostream>
#include <set>
#include <string>



void solve() {
    std::set<std::string>s;for(int i=0;i<4;++i){std::string x;std::cin>>x;s.insert(x);}std::cout<<(s.size()==4?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
