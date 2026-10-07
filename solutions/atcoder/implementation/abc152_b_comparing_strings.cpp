// Comparing Strings | https://atcoder.jp/contests/abc152/tasks/abc152_b
// Time: O(a+b); extra space: O(a+b).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int a,b;std::cin>>a>>b;std::cout<<std::min(std::string(b,static_cast<char>('0'+a)),std::string(a,static_cast<char>('0'+b)))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
