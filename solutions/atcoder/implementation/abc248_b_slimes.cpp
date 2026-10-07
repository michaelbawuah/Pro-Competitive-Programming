// Slimes | https://atcoder.jp/contests/abc248/tasks/abc248_b
// Time: O(log_K(B/A)+1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long a,b,k;std::cin>>a>>b>>k;int count=0;while(a<b){a*=k;++count;}std::cout<<count<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
