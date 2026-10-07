// First Query Problem | https://atcoder.jp/contests/abc283/tasks/abc283_b
// Time: O(N+Q); extra space: O(N).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>a(n);for(int&x:a)std::cin>>x;int q;std::cin>>q;while(q--){int type,k;std::cin>>type>>k;--k;if(type==1)std::cin>>a[k];else std::cout<<a[k]<<'\n';}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
