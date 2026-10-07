// Weird Function | https://atcoder.jp/contests/abc234/tasks/abc234_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long t;std::cin>>t;auto f=[](long long x){return x*x+2*x+3;};std::cout<<f(f(f(t)+t)+f(f(t)))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
