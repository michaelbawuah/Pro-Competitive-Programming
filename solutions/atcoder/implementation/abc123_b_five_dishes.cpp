// Five Dishes | https://atcoder.jp/contests/abc123/tasks/abc123_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int sum=0,best=0;
    for(int i=0;i<5;++i) {
        int x;
        std::cin>>x;
        int rounded=(x+9)/10*10;
        sum+=rounded;
        best=std::max(best,rounded-x);
    }
    std::cout<<sum-best<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
