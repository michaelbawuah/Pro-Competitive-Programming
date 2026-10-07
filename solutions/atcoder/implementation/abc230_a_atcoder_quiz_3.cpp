// AtCoder Quiz 3 | https://atcoder.jp/contests/abc230/tasks/abc230_a
// Time: O(1); extra space: O(1).
#include <iomanip>
#include <iostream>



void solve() {
    int n;std::cin>>n;if(n>=42)++n;std::cout<<"AGC"<<std::setfill('0')<<std::setw(3)<<n<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
