// Shiritori | https://atcoder.jp/contests/abc109/tasks/abc109_b
// Time: O(n L log n); extra space: O(n L).
#include <iostream>
#include <set>
#include <string>

void solve() {
    int n;
    std::cin>>n;
    std::set<std::string>seen;
    std::string prev,s;
    bool ok=true;
    while(n--) {
        std::cin>>s;
        if(!prev.empty()&&prev.back()!=s.front())ok=false;
        if(!seen.insert(s).second)ok=false;
        prev=s;
    }
    std::cout<<(ok?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
