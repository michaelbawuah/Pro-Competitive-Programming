// Multi Test Cases | https://atcoder.jp/contests/abc284/tasks/abc284_b
// Time: O(total N); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int t;
    std::cin>>t;
    while(t--) {
        int n,count=0;
        std::cin>>n;
        while(n--) {
            int x;
            std::cin>>x;
            count+=x%2;
        }
        std::cout<<count<<'\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
