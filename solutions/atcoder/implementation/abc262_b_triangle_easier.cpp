// Triangle (Easier) | https://atcoder.jp/contests/abc262/tasks/abc262_b
// Time: O(n^3+M); extra space: O(n^2).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,m;
    std::cin>>n>>m;
    std::vector<std::vector<bool>>edge(n,std::vector<bool>(n));
    while(m--) {
        int u,v;
        std::cin>>u>>v;
        --u;
        --v;
        edge[u][v]=edge[v][u]=true;
    }
    int answer=0;
    for(int a=0;a<n;++a)for(int b=a+1;b<n;++b)for(int c=b+1;c<n;++c)answer+=edge[a][b]&&edge[b][c]&&edge[c][a];
    std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
