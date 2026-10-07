// Postal Card | https://atcoder.jp/contests/abc287/tasks/abc287_b
// Time: O((N+M) log M); extra space: O(N+M).
#include <iostream>
#include <set>
#include <string>
#include <vector>

void solve() {
    int n,m;
    std::cin>>n>>m;
    std::vector<std::string>s(n);
    for(auto&x:s)std::cin>>x;
    std::set<std::string>suffix;
    while(m--) {
        std::string t;
        std::cin>>t;
        suffix.insert(t);
    }
    int answer=0;
    for(const auto&x:s)answer+=suffix.count(x.substr(3))!=0;
    std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
