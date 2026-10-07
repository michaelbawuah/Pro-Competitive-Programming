// Measure | https://atcoder.jp/contests/abc319/tasks/abc319_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    for(int i=0;i<=n;++i) {
        char mark='-';
        for(int j=1;j<=9;++j)if(n%j==0&&i%(n/j)==0) {
            mark=static_cast<char>('0'+j);
            break;
        }
        std::cout<<mark;
    }
    std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
