// Power | https://atcoder.jp/contests/abc283/tasks/abc283_a
// Time: O(B); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int a,b;std::cin>>a>>b;long long answer=1;for(int i=0;i<b;++i)answer*=a;std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
