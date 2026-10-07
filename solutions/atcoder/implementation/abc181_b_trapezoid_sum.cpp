// Trapezoid Sum | https://atcoder.jp/contests/abc181/tasks/abc181_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    long long sum=0;
    while(n--) {
        long long a,b;
        std::cin>>a>>b;
        sum+=(a+b)*(b-a+1)/2;
    }
    std::cout<<sum<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
