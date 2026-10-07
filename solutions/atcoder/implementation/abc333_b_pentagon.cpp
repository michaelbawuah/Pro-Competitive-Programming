// Pentagon | https://atcoder.jp/contests/abc333/tasks/abc333_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>



void solve() {
    std::string s,t;std::cin>>s>>t;auto length=[](const std::string&segment){int d=std::abs(segment[0]-segment[1]);return std::min(d,5-d);};std::cout<<(length(s)==length(t)?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
