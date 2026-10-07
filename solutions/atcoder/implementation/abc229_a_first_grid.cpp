// First Grid | https://atcoder.jp/contests/abc229/tasks/abc229_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string a,b;std::cin>>a>>b;bool disconnected=(a=="#."&&b==".#")||(a==".#"&&b=="#.");std::cout<<(disconnected?"No":"Yes")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
