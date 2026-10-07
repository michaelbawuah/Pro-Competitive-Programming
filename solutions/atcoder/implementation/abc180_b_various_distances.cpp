// Various distances | https://atcoder.jp/contests/abc180/tasks/abc180_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>



void solve() {
    int n;std::cin>>n;long long manhattan=0,squares=0,chebyshev=0;while(n--){long long x;std::cin>>x;x=std::abs(x);manhattan+=x;squares+=x*x;chebyshev=std::max(chebyshev,x);}std::cout<<manhattan<<'\n'<<std::setprecision(18)<<std::sqrt(static_cast<long double>(squares))<<'\n'<<chebyshev<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
