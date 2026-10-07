// Cat | https://atcoder.jp/contests/abc286/tasks/abc286_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::string s;std::cin>>n>>s;for(int i=0;i<n;++i){std::cout<<s[i];if(s[i]=='n'&&i+1<n&&s[i+1]=='a')std::cout<<'y';}std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
