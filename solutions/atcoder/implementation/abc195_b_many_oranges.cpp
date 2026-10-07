// Many Oranges | https://atcoder.jp/contests/abc195/tasks/abc195_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b,w;
    std::cin>>a>>b>>w;
    w*=1000;
    long long low=(w+b-1)/b,high=w/a;
    if(low>high)std::cout<<"UNSATISFIABLE\n";
    else std::cout<<low<<' '<<high<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
