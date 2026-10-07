// Perfect String | https://atcoder.jp/contests/abc249/tasks/abc249_b
// Time: O(n log 52); extra space: O(n).
#include <iostream>
#include <set>
#include <string>



void solve() {
    std::string s;std::cin>>s;bool lower=false,upper=false;std::set<char>seen;for(char c:s){lower=lower||('a'<=c&&c<='z');upper=upper||('A'<=c&&c<='Z');seen.insert(c);}std::cout<<(lower&&upper&&seen.size()==s.size()?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
