// Double Click | https://atcoder.jp/contests/abc297/tasks/abc297_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,d;
    std::cin>>n>>d;
    int previous=0,answer=-1;
    for(int i=0;i<n;++i) {
        int t;
        std::cin>>t;
        if(i>0&&t-previous<=d&&answer==-1)answer=t;
        previous=t;
    }
    std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
