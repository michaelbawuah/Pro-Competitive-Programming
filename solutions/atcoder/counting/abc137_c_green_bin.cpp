// Green Bin | https://atcoder.jp/contests/abc137/tasks/abc137_c
// Time: O(n L(log L+log n)); extra space: O(n L).
#include <algorithm>
#include <iostream>
#include <map>
#include <string>



void solve() {
    int n;std::cin>>n;std::map<std::string,long long>count;long long ans=0;while(n--){std::string s;std::cin>>s;std::sort(s.begin(),s.end());ans+=count[s]++;}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
