// AcCepted | https://atcoder.jp/contests/abc104/tasks/abc104_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;bool ok=s[0]=='A';int count=0;for(std::size_t i=1;i<s.size();++i){if(s[i]=='C'&&i>=2&&i+1<s.size())++count;else if(!(s[i]>='a'&&s[i]<='z'))ok=false;}std::cout<<(ok&&count==1?"AC":"WA")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
