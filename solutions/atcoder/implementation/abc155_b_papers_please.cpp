// Papers, Please | https://atcoder.jp/contests/abc155/tasks/abc155_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    bool ok=true;
    while(n--) {
        int x;
        std::cin>>x;
        if(x%2==0&&x%3!=0&&x%5!=0)ok=false;
    }
    std::cout<<(ok?"APPROVED":"DENIED")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
