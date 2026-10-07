// Legendary Players | https://atcoder.jp/contests/abc319/tasks/abc319_a
// Time: O(1); extra space: O(1).
#include <iostream>
#include <map>
#include <string>



void solve() {
    std::string s;std::cin>>s;std::map<std::string,int>rating{{"tourist",3858},{"ksun48",3679},{"Benq",3658},{"Um_nik",3648},{"apiad",3638},{"Stonefeang",3630},{"ecnerwala",3613},{"mnbvmar",3555},{"newbiedmy",3516},{"semiexp",3481}};std::cout<<rating.at(s)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
