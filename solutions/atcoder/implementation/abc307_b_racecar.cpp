// racecar | https://atcoder.jp/contests/abc307/tasks/abc307_b
// Time: O(n^2 L); extra space: O(nL).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<std::string>s(n);
    for(auto&x:s)std::cin>>x;
    bool possible=false;
    for(int i=0;i<n;++i)for(int j=0;j<n;++j)if(i!=j) {
        std::string t=s[i]+s[j];
        possible=possible||std::equal(t.begin(),t.end(),t.rbegin());
    }
    std::cout<<(possible?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
