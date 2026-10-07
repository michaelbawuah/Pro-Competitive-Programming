// Base K | https://atcoder.jp/contests/abc220/tasks/abc220_b
// Time: O(|A|+|B|); extra space: O(|A|+|B|).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int k;std::string a,b;std::cin>>k>>a>>b;auto decode=[&](const std::string&s){long long x=0;for(char c:s)x=x*k+c-'0';return x;};std::cout<<decode(a)*decode(b)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
