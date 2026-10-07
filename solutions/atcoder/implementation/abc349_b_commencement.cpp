// Commencement | https://atcoder.jp/contests/abc349/tasks/abc349_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    std::vector<int>letter(26),frequency(s.size()+1);
    for(char c:s)++letter[c-'a'];
    for(int count:letter)if(count>0)++frequency[count];
    bool ok=true;
    for(std::size_t i=1;i<frequency.size();++i)ok=ok&&(frequency[i]==0||frequency[i]==2);
    std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
