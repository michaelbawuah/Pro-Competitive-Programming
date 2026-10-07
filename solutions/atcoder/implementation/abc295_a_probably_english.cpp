// Probably English | https://atcoder.jp/contests/abc295/tasks/abc295_a
// Time: O(total characters); extra space: O(1).
#include <iostream>
#include <set>
#include <string>

void solve() {
    int n;
    std::cin>>n;
    std::set<std::string>target{"and","not","that","the","you"};
    bool found=false;
    while(n--) {
        std::string s;
        std::cin>>s;
        found=found||target.count(s)!=0;
    }
    std::cout<<(found?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
