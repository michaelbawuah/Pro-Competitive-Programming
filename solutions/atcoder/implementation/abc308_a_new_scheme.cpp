// New Scheme | https://atcoder.jp/contests/abc308/tasks/abc308_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int previous=0;bool ok=true;for(int i=0;i<8;++i){int x;std::cin>>x;ok=ok&&previous<=x&&100<=x&&x<=675&&x%25==0;previous=x;}std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
