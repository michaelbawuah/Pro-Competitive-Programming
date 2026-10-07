// Same Name | https://atcoder.jp/contests/abc216/tasks/abc216_b
// Time: O(n L log n); extra space: O(n L).
#include <iostream>
#include <set>
#include <string>
#include <utility>



void solve() {
    int n;std::cin>>n;std::set<std::pair<std::string,std::string>>seen;bool duplicate=false;while(n--){std::string first,last;std::cin>>first>>last;if(!seen.insert({first,last}).second)duplicate=true;}std::cout<<(duplicate?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
