// Digits | https://atcoder.jp/contests/abc156/tasks/abc156_b
// Time: O(log_K N); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long n,k;std::cin>>n>>k;int digits=0;do{++digits;n/=k;}while(n);std::cout<<digits<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
