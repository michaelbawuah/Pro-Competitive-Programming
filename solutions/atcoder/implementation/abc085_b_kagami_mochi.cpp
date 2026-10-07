// Kagami Mochi | https://atcoder.jp/contests/abc085/tasks/abc085_b
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>a(n);for(int&x:a)std::cin>>x;std::sort(a.begin(),a.end());std::cout<<std::unique(a.begin(),a.end())-a.begin()<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
