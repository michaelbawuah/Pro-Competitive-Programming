// Christmas Eve Eve | https://atcoder.jp/contests/abc115/tasks/abc115_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,total=0,largest=0;
    std::cin>>n;
    while(n--) {
        int x;
        std::cin>>x;
        total+=x;
        largest=std::max(largest,x);
    }
    std::cout<<total-largest/2<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
