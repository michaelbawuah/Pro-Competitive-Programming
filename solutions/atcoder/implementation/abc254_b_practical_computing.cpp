// Practical Computing | https://atcoder.jp/contests/abc254/tasks/abc254_b
// Time: O(n^2); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<long long>row;
    for(int i=0;i<n;++i) {
        std::vector<long long>next(i+1,1);
        for(int j=1;j<i;++j)next[j]=row[j-1]+row[j];
        row=next;
        for(int j=0;j<=i;++j)std::cout<<row[j]<<(j==i?'\n':' ');
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
