// 321-like Checker | https://atcoder.jp/contests/abc321/tasks/abc321_a
// Time: O(number of digits); extra space: O(number of digits).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string n;std::cin>>n;bool ok=true;for(std::size_t i=1;i<n.size();++i)ok=ok&&n[i-1]>n[i];std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
