// Contest Result | https://atcoder.jp/contests/abc290/tasks/abc290_a
// Time: O(N+M); extra space: O(N).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,m;std::cin>>n>>m;std::vector<int>a(n);for(int&x:a)std::cin>>x;int sum=0;while(m--){int b;std::cin>>b;sum+=a[b-1];}std::cout<<sum<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
