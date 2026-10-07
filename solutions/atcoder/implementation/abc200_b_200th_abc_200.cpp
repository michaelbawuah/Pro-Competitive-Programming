// 200th ABC-200 | https://atcoder.jp/contests/abc200/tasks/abc200_b
// Time: O(K); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long n;int k;std::cin>>n>>k;while(k--)n=n%200==0?n/200:n*1000+200;std::cout<<n<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
