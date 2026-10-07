// Arithmetic Progression | https://atcoder.jp/contests/abc340/tasks/abc340_a
// Time: O((B-A)/D+1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int a,b,d;std::cin>>a>>b>>d;for(int x=a;x<=b;x+=d)std::cout<<x<<(x==b?'\n':' ');
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
