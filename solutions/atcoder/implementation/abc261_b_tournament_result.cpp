// Tournament Result | https://atcoder.jp/contests/abc261/tasks/abc261_b
// Time: O(n^2); extra space: O(n^2).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<std::string>a(n);for(auto&s:a)std::cin>>s;bool ok=true;for(int i=0;i<n;++i)for(int j=0;j<i;++j){char expected=a[i][j]=='W'?'L':a[i][j]=='L'?'W':'D';ok=ok&&a[j][i]==expected;}std::cout<<(ok?"correct":"incorrect")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
