// Typing | https://atcoder.jp/contests/abc352/tasks/abc352_b
// Time: O(|S|+|T|); extra space: O(|S|+|T|).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s,t;
    std::cin>>s>>t;
    std::size_t next=0;
    for(std::size_t i=0;i<t.size()&&next<s.size();++i)if(t[i]==s[next]) {
        if(next>0)std::cout<<' ';
        std::cout<<i+1;
        ++next;
    }
    std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
