// Mex | https://atcoder.jp/contests/abc245/tasks/abc245_b
// Time: O(n+2001); extra space: O(2001).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<bool>present(2002);while(n--){int x;std::cin>>x;present[x]=true;}int answer=0;while(present[answer])++answer;std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
