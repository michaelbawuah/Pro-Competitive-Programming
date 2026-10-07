// Saturday | https://atcoder.jp/contests/abc267/tasks/abc267_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;std::vector<std::string>day{"Monday","Tuesday","Wednesday","Thursday","Friday"};for(int i=0;i<5;++i)if(day[i]==s)std::cout<<5-i<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
