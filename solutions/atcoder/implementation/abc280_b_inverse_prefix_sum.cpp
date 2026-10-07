// Inverse Prefix Sum | https://atcoder.jp/contests/abc280/tasks/abc280_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    long long previous=0;
    for(int i=0;i<n;++i) {
        long long sum;
        std::cin>>sum;
        std::cout<<sum-previous<<(i+1==n?'\n':' ');
        previous=sum;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
