// AtCoder Janken 2 | https://atcoder.jp/contests/abc354/tasks/abc354_b
// Time: O(n L log n); extra space: O(nL).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,total=0;std::cin>>n;std::vector<std::string>name(n);for(auto&s:name){int rating;std::cin>>s>>rating;total+=rating;}std::sort(name.begin(),name.end());std::cout<<name[total%n]<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
