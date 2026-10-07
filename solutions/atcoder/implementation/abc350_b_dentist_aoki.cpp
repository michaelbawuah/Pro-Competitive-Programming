// Dentist Aoki | https://atcoder.jp/contests/abc350/tasks/abc350_b
// Time: O(N+Q); extra space: O(N).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,q;std::cin>>n>>q;std::vector<bool>tooth(n,true);while(q--){int t;std::cin>>t;tooth[t-1]=!tooth[t-1];}std::cout<<std::count(tooth.begin(),tooth.end(),true)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
