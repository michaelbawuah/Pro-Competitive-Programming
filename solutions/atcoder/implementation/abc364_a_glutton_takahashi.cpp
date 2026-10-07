// Glutton Takahashi | https://atcoder.jp/contests/abc364/tasks/abc364_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<std::string>s(n);
    for(auto&x:s)std::cin>>x;
    bool possible=true;
    for(int i=1;i+1<n;++i)if(s[i-1]=="sweet"&&s[i]=="sweet")possible=false;
    std::cout<<(possible?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
