// T-shirt | https://atcoder.jp/contests/abc242/tasks/abc242_a
// Time: O(1); extra space: O(1).
#include <iomanip>
#include <iostream>



void solve() {
    int a,b,c,x;std::cin>>a>>b>>c>>x;double probability=x<=a?1.0:x<=b?static_cast<double>(c)/(b-a):0.0;std::cout<<std::setprecision(15)<<probability<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
