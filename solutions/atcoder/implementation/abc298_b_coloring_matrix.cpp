// Coloring Matrix | https://atcoder.jp/contests/abc298/tasks/abc298_b
// Time: O(n^2); extra space: O(n^2).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<std::vector<int>>a(n,std::vector<int>(n)),b=a;for(auto&row:a)for(int&x:row)std::cin>>x;for(auto&row:b)for(int&x:row)std::cin>>x;bool possible=false;for(int turn=0;turn<4;++turn){bool ok=true;for(int i=0;i<n;++i)for(int j=0;j<n;++j)if(a[i][j]&&!b[i][j])ok=false;possible=possible||ok;auto rotated=a;for(int i=0;i<n;++i)for(int j=0;j<n;++j)rotated[i][j]=a[n-1-j][i];a=rotated;}std::cout<<(possible?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
