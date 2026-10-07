// Daydream | https://atcoder.jp/contests/abc049/tasks/arc065_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    std::vector<bool>ok(s.size()+1);
    ok[0]=true;
    for(std::size_t i=0;i<s.size();++i)if(ok[i])for(const std::string w:{"dream","dreamer","erase","eraser"})if(s.compare(i,w.size(),w)==0)ok[i+w.size()]=true;
    std::cout<<(ok.back()?"YES":"NO")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
