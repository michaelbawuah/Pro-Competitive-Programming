// Takahashi's Secret | https://atcoder.jp/contests/abc228/tasks/abc228_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,x;
    std::cin>>n>>x;
    --x;
    std::vector<int>next(n);
    for(int&v:next) {
        std::cin>>v;
        --v;
    }
    std::vector<bool>seen(n);
    int count=0;
    while(!seen[x]) {
        seen[x]=true;
        ++count;
        x=next[x];
    }
    std::cout<<count<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
