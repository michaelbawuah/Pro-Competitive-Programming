// Potions | https://atcoder.jp/contests/abc317/tasks/abc317_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,h,x;
    std::cin>>n>>h>>x;
    int answer=0;
    for(int i=1;i<=n;++i) {
        int potion;
        std::cin>>potion;
        if(answer==0&&h+potion>=x)answer=i;
    }
    std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
