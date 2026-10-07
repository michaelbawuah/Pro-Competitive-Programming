// Distinct Strings | https://atcoder.jp/contests/abc225/tasks/abc225_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;std::sort(s.begin(),s.end());int count=0;do{++count;}while(std::next_permutation(s.begin(),s.end()));std::cout<<count<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
