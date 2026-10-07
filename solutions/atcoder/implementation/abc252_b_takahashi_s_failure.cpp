// Takahashi's Failure | https://atcoder.jp/contests/abc252/tasks/abc252_b
// Time: O(N+K); extra space: O(N).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,k;std::cin>>n>>k;std::vector<int>a(n);for(int&x:a)std::cin>>x;int best=*std::max_element(a.begin(),a.end());bool possible=false;while(k--){int b;std::cin>>b;possible=possible||a[b-1]==best;}std::cout<<(possible?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
