// Traveling | https://atcoder.jp/contests/abc086/tasks/arc089_a
// Time: O(n); extra space: O(1).
#include <cstdlib>
#include <iostream>

void solve() {
    int n,t=0,x=0,y=0;
    bool ok=true;
    std::cin>>n;
    while(n--) {
        int nt,nx,ny;
        std::cin>>nt>>nx>>ny;
        int d=std::abs(nx-x)+std::abs(ny-y),dt=nt-t;
        ok=ok&&d<=dt&&(dt-d)%2==0;
        t=nt;
        x=nx;
        y=ny;
    }
    std::cout<<(ok?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
