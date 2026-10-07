// Bingo | https://atcoder.jp/contests/abc157/tasks/abc157_b
// Time: O(N); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int a[3][3];bool marked[3][3]={};for(auto&r:a)for(int&x:r)std::cin>>x;int n;std::cin>>n;while(n--){int x;std::cin>>x;for(int i=0;i<3;++i)for(int j=0;j<3;++j)if(a[i][j]==x)marked[i][j]=true;}bool ok=false;for(int i=0;i<3;++i)ok=ok||(marked[i][0]&&marked[i][1]&&marked[i][2])||(marked[0][i]&&marked[1][i]&&marked[2][i]);ok=ok||(marked[0][0]&&marked[1][1]&&marked[2][2])||(marked[0][2]&&marked[1][1]&&marked[2][0]);std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
