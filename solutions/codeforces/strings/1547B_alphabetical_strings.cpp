// Alphabetical Strings | https://codeforces.com/problemset/problem/1547/B
// Time: O(n) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        std::string word; std::cin >> word;
        const auto position=word.find('a'); bool valid=position!=std::string::npos;
        int left=valid ? static_cast<int>(position) : 0, right=left;
        for (int i=1;valid && i<static_cast<int>(word.size());++i) {
            const char next=static_cast<char>('a'+i);
            if (left>0 && word[left-1]==next) --left;
            else if (right+1<static_cast<int>(word.size()) && word[right+1]==next) ++right;
            else valid=false;
        }
        std::cout << (valid ? "YES" : "NO") << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
