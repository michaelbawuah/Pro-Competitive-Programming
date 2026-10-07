// Who is Saikyo? | https://atcoder.jp/contests/abc313/tasks/abc313_b
// Time: O(N+M); extra space: O(N).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,m;
    std::cin>>n>>m;
    std::vector<bool>defeated(n);
    while(m--) {
        int a,b;
        std::cin>>a>>b;
        defeated[b-1]=true;
    }
    int candidate=-1,count=0;
    for(int i=0;i<n;++i)if(!defeated[i]) {
        candidate=i+1;
        ++count;
    }
    std::cout<<(count==1?candidate:-1)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
