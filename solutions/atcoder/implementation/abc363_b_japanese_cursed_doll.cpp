// Japanese Cursed Doll | https://atcoder.jp/contests/abc363/tasks/abc363_b
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,t,p;std::cin>>n>>t>>p;std::vector<int>length(n);for(int&x:length)std::cin>>x;std::sort(length.rbegin(),length.rend());std::cout<<std::max(0,t-length[p-1])<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
