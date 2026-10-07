// Pasta | https://atcoder.jp/contests/abc241/tasks/abc241_b
// Time: O((N+M) log N); extra space: O(N).
#include <iostream>
#include <map>

void solve() {
    int n,m;
    std::cin>>n>>m;
    std::map<int,int>count;
    while(n--) {
        int x;
        std::cin>>x;
        ++count[x];
    }
    bool ok=true;
    while(m--) {
        int x;
        std::cin>>x;
        if(--count[x]<0)ok=false;
    }
    std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
