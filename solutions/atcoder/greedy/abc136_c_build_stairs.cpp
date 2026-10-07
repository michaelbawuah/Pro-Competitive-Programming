// Build Stairs | https://atcoder.jp/contests/abc136/tasks/abc136_c
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;long long prev=0;bool ok=true;while(n--){long long h;std::cin>>h;if(h-1>=prev)prev=h-1;else if(h>=prev)prev=h;else ok=false;}std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
