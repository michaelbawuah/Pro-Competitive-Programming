// Unique Nicknames | https://atcoder.jp/contests/abc247/tasks/abc247_b
// Time: O(n^2 L); extra space: O(n L).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<std::string>s(n),t(n);
    for(int i=0;i<n;++i)std::cin>>s[i]>>t[i];
    bool possible=true;
    for(int i=0;i<n;++i) {
        bool first=true,last=true;
        for(int j=0;j<n;++j)if(i!=j) {
            first=first&&s[i]!=s[j]&&s[i]!=t[j];
            last=last&&t[i]!=s[j]&&t[i]!=t[j];
        }
        possible=possible&&(first||last);
    }
    std::cout<<(possible?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
