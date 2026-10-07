// Still TBD | https://atcoder.jp/contests/abc119/tasks/abc119_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string date;std::cin>>date;std::cout<<(date<="2019/04/30"?"Heisei":"TBD")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
