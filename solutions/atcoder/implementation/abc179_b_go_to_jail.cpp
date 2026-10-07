// Go to Jail | https://atcoder.jp/contests/abc179/tasks/abc179_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,run=0;bool ok=false;std::cin>>n;while(n--){int a,b;std::cin>>a>>b;run=a==b?run+1:0;ok=ok||run>=3;}std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
