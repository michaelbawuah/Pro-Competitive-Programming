// First Player | https://atcoder.jp/contests/abc304/tasks/abc304_a
// Time: O(total name length+N); extra space: O(total name length+N).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<std::string>name(n);std::vector<int>age(n);int youngest=0;for(int i=0;i<n;++i){std::cin>>name[i]>>age[i];if(age[i]<age[youngest])youngest=i;}for(int offset=0;offset<n;++offset)std::cout<<name[(youngest+offset)%n]<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
