// Substring | https://atcoder.jp/contests/abc347/tasks/abc347_b
// Time: O(n^3 log n); extra space: O(n^3).
#include <iostream>
#include <set>
#include <string>

void solve() {
    std::string s;
    std::cin>>s;
    std::set<std::string>parts;
    for(std::size_t start=0;start<s.size();++start)for(std::size_t length=1;start+length<=s.size();++length)parts.insert(s.substr(start,length));
    std::cout<<parts.size()<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
