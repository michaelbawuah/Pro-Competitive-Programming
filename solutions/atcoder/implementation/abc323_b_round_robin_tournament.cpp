// Round-Robin Tournament | https://atcoder.jp/contests/abc323/tasks/abc323_b
// Time: O(n^2+n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<std::pair<int,int>>rank;
    for(int i=1;i<=n;++i) {
        std::string s;
        std::cin>>s;
        rank.push_back({-static_cast<int>(std::count(s.begin(),s.end(),'o')),i});
    }
    std::sort(rank.begin(),rank.end());
    for(int i=0;i<n;++i)std::cout<<rank[i].second<<(i+1==n?'\n':' ');
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
