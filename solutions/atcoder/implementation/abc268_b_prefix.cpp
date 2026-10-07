// Prefix? | https://atcoder.jp/contests/abc268/tasks/abc268_b
// Time: O(|S|+|T|); extra space: O(|S|+|T|).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s,t;std::cin>>s>>t;std::cout<<(t.size()>=s.size()&&t.compare(0,s.size(),s)==0?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
