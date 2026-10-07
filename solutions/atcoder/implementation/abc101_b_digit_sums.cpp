// Digit Sums | https://atcoder.jp/contests/abc101/tasks/abc101_b
// Time: O(log N); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long n;std::cin>>n;int sum=0;for(long long x=n;x;x/=10)sum+=x%10;std::cout<<(n%sum==0?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
