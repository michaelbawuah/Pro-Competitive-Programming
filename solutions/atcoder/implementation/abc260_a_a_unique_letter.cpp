// A Unique Letter | https://atcoder.jp/contests/abc260/tasks/abc260_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    for(char c:s)if(std::count(s.begin(),s.end(),c)==1) {
        std::cout<<c<<'\n';
        return;
    }
    std::cout<<-1<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
