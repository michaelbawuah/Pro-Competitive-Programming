// Maximum Difference | https://atcoder.jp/contests/abc102/tasks/abc102_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;long long lo=1000000000,hi=0;while(n--){long long x;std::cin>>x;lo=std::min(lo,x);hi=std::max(hi,x);}std::cout<<hi-lo<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
