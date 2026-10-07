// Past ABCs | https://atcoder.jp/contests/abc350/tasks/abc350_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    int number=std::stoi(s.substr(3));
    std::cout<<(1<=number&&number<=349&&number!=316?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
