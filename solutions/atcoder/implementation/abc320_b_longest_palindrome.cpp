// Longest Palindrome | https://atcoder.jp/contests/abc320/tasks/abc320_b
// Time: O(n^2); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    int n=static_cast<int>(s.size()),best=1;
    for(int center=0;center<n;++center)for(int even=0;even<2;++even) {
        int l=center,r=center+even;
        while(l>=0&&r<n&&s[l]==s[r]) {
            best=std::max(best,r-l+1);
            --l;
            ++r;
        }
    }
    std::cout<<best<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
