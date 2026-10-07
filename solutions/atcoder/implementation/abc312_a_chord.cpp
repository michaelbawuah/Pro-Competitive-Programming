// Chord | https://atcoder.jp/contests/abc312/tasks/abc312_a
// Time: O(1); extra space: O(1).
#include <iostream>
#include <set>
#include <string>



void solve() {
    std::string s;std::cin>>s;std::set<std::string>chords{"ACE","BDF","CEG","DFA","EGB","FAC","GBD"};std::cout<<(chords.count(s)?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
