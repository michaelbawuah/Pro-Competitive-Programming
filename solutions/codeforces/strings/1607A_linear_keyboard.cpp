// Linear Keyboard | https://codeforces.com/problemset/problem/1607/A
// Time: O(n) per case; extra space: O(n).
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        std::string keyboard,word; std::cin >> keyboard >> word;
        std::vector<int> position(26);
        for (int i=0;i<26;++i) position[keyboard[i]-'a']=i;
        int answer=0;
        for (std::size_t i=1;i<word.size();++i) answer+=std::abs(position[word[i]-'a']-position[word[i-1]-'a']);
        std::cout << answer << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
