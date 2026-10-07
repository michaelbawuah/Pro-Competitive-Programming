// Which is ahead? | https://atcoder.jp/contests/abc342/tasks/abc342_b
// Time: O(N+Q); extra space: O(N).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>position(n+1);for(int i=0;i<n;++i){int person;std::cin>>person;position[person]=i;}int q;std::cin>>q;while(q--){int a,b;std::cin>>a>>b;std::cout<<(position[a]<position[b]?a:b)<<'\n';}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
