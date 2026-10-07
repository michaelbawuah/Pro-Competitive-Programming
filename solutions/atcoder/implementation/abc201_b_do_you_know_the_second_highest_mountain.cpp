// Do you know the second highest mountain? | https://atcoder.jp/contests/abc201/tasks/abc201_b
// Time: O(n log n+total name length); extra space: O(n+total name length).
#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<std::pair<int,std::string>>mountains(n);for(auto&[height,name]:mountains)std::cin>>name>>height;std::sort(mountains.rbegin(),mountains.rend());std::cout<<mountains[1].second<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
