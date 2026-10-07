// YYMM or MMYY | https://atcoder.jp/contests/abc126/tasks/abc126_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;int first=std::stoi(s.substr(0,2)),last=std::stoi(s.substr(2));bool a=1<=first&&first<=12,b=1<=last&&last<=12;std::cout<<(a&&b?"AMBIGUOUS":a?"MMYY":b?"YYMM":"NA")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
