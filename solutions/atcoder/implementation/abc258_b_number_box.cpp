// Number Box | https://atcoder.jp/contests/abc258/tasks/abc258_b
// Time: O(n^3); extra space: O(n^2).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<std::string>a(n);for(auto&s:a)std::cin>>s;long long best=0;for(int i=0;i<n;++i)for(int j=0;j<n;++j)for(int dx=-1;dx<=1;++dx)for(int dy=-1;dy<=1;++dy)if(dx||dy){int x=i,y=j;long long value=0;for(int step=0;step<n;++step){value=10*value+a[x][y]-'0';x=(x+dx+n)%n;y=(y+dy+n)%n;}best=std::max(best,value);}std::cout<<best<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
