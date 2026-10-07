// TaK Code | https://atcoder.jp/contests/abc312/tasks/abc312_b
// Time: O(NM); extra space: O(NM).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,m;
    std::cin>>n>>m;
    std::vector<std::string>s(n);
    for(auto&row:s)std::cin>>row;
    for(int top=0;top+9<=n;++top)for(int left=0;left+9<=m;++left) {
        bool ok=true;
        for(int i=0;i<4;++i)for(int j=0;j<4;++j) {
            char expected=i<3&&j<3?'#':'.';
            ok=ok&&s[top+i][left+j]==expected&&s[top+8-i][left+8-j]==expected;
        }
        if(ok)std::cout<<top+1<<' '<<left+1<<'\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
