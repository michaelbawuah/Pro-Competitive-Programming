// Tax Increase | https://atcoder.jp/contests/abc158/tasks/abc158_c
// Time: O(1000); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int a,b;
    std::cin>>a>>b;
    for(int price=1;price<=1010;++price)if(price*8/100==a&&price/10==b) {
        std::cout<<price<<'\n';
        return;
    }
    std::cout<<-1<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
