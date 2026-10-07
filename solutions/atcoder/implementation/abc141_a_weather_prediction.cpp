// Weather Prediction | https://atcoder.jp/contests/abc141/tasks/abc141_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;std::cout<<(s=="Sunny"?"Cloudy":s=="Cloudy"?"Rainy":"Sunny")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
