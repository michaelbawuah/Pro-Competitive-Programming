// Uppercase and Lowercase | https://atcoder.jp/contests/abc357/tasks/abc357_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    int upper=0;
    for(char c:s)upper+='A'<=c&&c<='Z';
    bool make_upper=2*upper>static_cast<int>(s.size());
    for(char&c:s) {
        if(make_upper&&'a'<=c&&c<='z')c=static_cast<char>('A'+c-'a');
        else if(!make_upper&&'A'<=c&&c<='Z')c=static_cast<char>('a'+c-'A');
    }
    std::cout<<s<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
