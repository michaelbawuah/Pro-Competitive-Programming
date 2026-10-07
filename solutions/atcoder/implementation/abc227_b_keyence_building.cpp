// KEYENCE building | https://atcoder.jp/contests/abc227/tasks/abc227_b
// Time: O(M^2+n), M=1000; extra space: O(M).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::vector<bool>valid(1001);for(int a=1;7*a+3<=1000;++a)for(int b=1;4*a*b+3*a+3*b<=1000;++b)valid[4*a*b+3*a+3*b]=true;int n,answer=0;std::cin>>n;while(n--){int s;std::cin>>s;answer+=!valid[s];}std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
