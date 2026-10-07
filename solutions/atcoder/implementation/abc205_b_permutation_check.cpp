// Permutation Check | https://atcoder.jp/contests/abc205/tasks/abc205_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<bool>seen(n);bool ok=true;while(n--){int x;std::cin>>x;if(seen[x-1])ok=false;seen[x-1]=true;}std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
