// Qual B | https://atcoder.jp/contests/abc290/tasks/abc290_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,k;std::string s;std::cin>>n>>k>>s;for(char&c:s)if(c=='o'){if(k>0)--k;else c='x';}std::cout<<s<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
