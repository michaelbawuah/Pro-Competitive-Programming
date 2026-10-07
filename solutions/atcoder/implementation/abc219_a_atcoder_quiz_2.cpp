// AtCoder Quiz 2 | https://atcoder.jp/contests/abc219/tasks/abc219_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int x;
    std::cin>>x;
    if(x>=90)std::cout<<"expert\n";
    else std::cout<<(x<40?40-x:x<70?70-x:90-x)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
