// Online Shopping | https://atcoder.jp/contests/abc332/tasks/abc332_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,s,k;
    std::cin>>n>>s>>k;
    long long total=0;
    while(n--) {
        long long p,q;
        std::cin>>p>>q;
        total+=p*q;
    }
    if(total<s)total+=k;
    std::cout<<total<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
